#include "Vetor.h"

#include <iostream>
#include <fstream>

namespace Matematica
{
	Vetor::Vetor()
	{
		n_elementos = 0;
	}

	Vetor::Vetor( int n, int valor )
	{
		n_elementos = n;

		v = new double[n_elementos];

		for ( unsigned int i = 0; i < n_elementos; ++i )
		{
			v[i] = valor;
		}
	}

	Vetor::Vetor( const Vetor & vetor )
	{
		n_elementos = vetor.n_elementos;

		v = new double[n_elementos];

		for ( unsigned int i = 0; i < n_elementos; ++i )
		{
			v[i] = vetor[i];
		}
	}

	Vetor::~Vetor()
	{
		if ( n_elementos != 0 )
		{
			delete [] v;
		}
	}

	const Vetor Vetor::operator+ ( const Vetor & vetor ) const
	{
		if ( n_elementos != vetor.n_elementos )
		{
			throw OperacaoInviavel();
		}

		Vetor v_asw( vetor.n_elementos );

		for ( unsigned int i = 0; i < v_asw.n_elementos; i++ )
		{
			v_asw[i] = v[i] + vetor[i];
		}

		return v_asw;
	}

	Vetor & Vetor::operator+= ( const Vetor & vetor )
	{
		*this = *this + vetor;
		return *this;
	}

	const Vetor Vetor::operator- ( const Vetor & vetor ) const
	{
		if ( n_elementos != vetor.n_elementos )
		{
			throw OperacaoInviavel();
		}

		Vetor v_asw( vetor.n_elementos );

		for ( unsigned int i = 0; i < v_asw.n_elementos; i++ )
		{
			v_asw[i] = v[i] - vetor[i];
		}

		return v_asw;
	}

	Vetor & Vetor::operator-= ( const Vetor & vetor )
	{
		*this = *this - vetor;
		return *this;
	}

	const Vetor Vetor::operator* ( const int escalar ) const
	{
		Vetor v_asw( n_elementos );

		for ( unsigned int i = 0; i < v_asw.n_elementos; i++ )
		{
			v_asw[i] = escalar * v[i];
		}

		return v_asw;
	}

	const double Vetor::operator% ( const Vetor & vetor ) const
	{
		if ( n_elementos != vetor.n_elementos )
		{
			throw OperacaoInviavel();
		}

		double result = 0;

		for ( unsigned int i = 0; i < n_elementos; i++ )
		{
			result += v[i] * vetor.v[i];
		}

		return result;
	}

	Vetor& Vetor::operator= ( const Vetor & vetor )
	{
		// confere se nao se trata do mesmo objeto
		if ( this == &vetor )
		{
			return *this;
		}

		// desaloca memoria
		if ( n_elementos != 0 )
		{
			delete [] v;
		}

		n_elementos = vetor.n_elementos;

		// aloca memoria
		v = new double[n_elementos];

		// faz copia
		for ( unsigned int i = 0; i < n_elementos; ++i )
		{
			v[i] = vetor[i];
		}

		// retorna objeto
		return *this;
	}

	double& Vetor::operator[] ( const unsigned int pos )
	{
		if ( pos >= n_elementos ) throw ViolacaoLimite();
		return v[pos];
	}

	const double& Vetor::operator[] ( const unsigned int pos ) const
	{
		if ( pos >= n_elementos ) throw ViolacaoLimite();
		return v[pos];
	}

	double& Vetor::operator() ( const unsigned int pos )
	{
		if ( pos >= n_elementos ) throw ViolacaoLimite();
		return v[pos];
	}

	const double& Vetor::operator() ( const unsigned int pos ) const
	{
		if ( pos >= n_elementos ) throw ViolacaoLimite();
		return v[pos];
	}

	std::ostream& operator<< ( std::ostream & os, const Vetor & vetor )
	{
		if ( vetor.n_elementos == 0 )
		{
			return os;
		}

		for ( unsigned int i = 0; i < vetor.n_elementos -1; ++i )
		{
			os << vetor[i] << " ";
		}
		os << vetor[vetor.n_elementos - 1];

		return os;
	}

	std::istream& operator>> ( std::istream & is, Vetor & vetor )
	{
		for ( unsigned int i = 0; i < vetor.n_elementos; ++i )
		{
			is >> vetor[i];
		}

		return is;
	}

	const Vetor operator* ( const int escalar, const Vetor & vetor )
	{
		Vetor v_asw( vetor.n_elementos );

		for ( unsigned int i = 0; i < v_asw.n_elementos; i++ )
		{
			v_asw[i] = escalar * vetor.v[i];
		}

		return v_asw;
	}
}
