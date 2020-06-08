#include "VetorSingleton.h"

#include <iostream>
#include <fstream>

namespace Matematica
{
	VetorSingleton * VetorSingleton::instanciaPtr = 0;

	VetorSingleton * VetorSingleton::Instancia( int n, int valor )
	{
		if ( instanciaPtr == 0 )
		{
			std::cout << "Intanciando objeto da classe VetorSingleton!" << std::endl;
			instanciaPtr = new VetorSingleton(n, valor);
		}
		else
		{
			std::cout << "Nao e' possivel instanciar um outro objeto da classe VetorSingleton!" << std::endl;
		}

		return instanciaPtr;
	}

	VetorSingleton::VetorSingleton( int n, int valor )
	{
		n_elementos = n;

		v = new double[n_elementos];

		for ( unsigned int i = 0; i < n_elementos; ++i )
		{
			v[i] = valor;
		}
	}

	VetorSingleton::~VetorSingleton()
	{
		delete [] v;
	}

	VetorSingleton & VetorSingleton::operator*= ( const int escalar )
	{
		for ( unsigned int i = 0; i < n_elementos; i++ )
		{
			v[i] *= escalar;
		}

		return *this;
	}

	double& VetorSingleton::operator[] ( const unsigned int pos )
	{
		if ( pos >= n_elementos ) throw ViolacaoLimite();
		return v[pos];
	}

	const double& VetorSingleton::operator[] ( const unsigned int pos ) const
	{
		if ( pos >= n_elementos ) throw ViolacaoLimite();
		return v[pos];
	}

	double& VetorSingleton::operator() ( const unsigned int pos )
	{
		if ( pos >= n_elementos ) throw ViolacaoLimite();
		return v[pos];
	}

	const double& VetorSingleton::operator() ( const unsigned int pos ) const
	{
		if ( pos >= n_elementos ) throw ViolacaoLimite();
		return v[pos];
	}

	std::ostream& operator<< ( std::ostream & os, const VetorSingleton & vetor )
	{
		if ( vetor.n_elementos == 0 )
		{
			return os;
		}

		for ( unsigned int i = 0; i < vetor.n_elementos - 1; ++i )
		{
			os << vetor[i] << " ";
		}
		os << vetor[vetor.n_elementos - 1];

		return os;
	}

	std::istream& operator>> ( std::istream & is, VetorSingleton & vetor )
	{
		for ( unsigned int i = 0; i < vetor.n_elementos; ++i )
		{
			is >> vetor[i];
		}

		return is;
	}
}
