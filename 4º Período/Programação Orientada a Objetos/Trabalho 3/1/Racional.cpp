#include "Racional.h"

#include <iostream>
#include <cmath>

namespace Matematica
{
    Racional::Racional( int num, int den ) : Numerador(num), Denominador(den)
    {
	    if ( Denominador != 0 )
	    {
		    FormaReduzida();
	    }
	    else
	    {
		    std::cerr << "Voce esta tentando criar um numero racional com denominador igual a 0." << std::endl;
		    std::cerr << "Isso nao sera permitido. Racional criado com denominador igual a 1."    << std:: endl;
		    Denominador = 1;
	    }
    }

    void Racional::FormaReduzida()
    {
	    int mdc = MDC( Numerador, Denominador );

	    Numerador 	/= mdc;
	    Denominador /= mdc;

	    SetSinal();
    }

    void Racional::SetSinal()
    {
	    if ( Denominador < 0 )
	    {
		    Numerador *= -1;
		    Denominador *= -1;
	    }
    }

	void Racional::ImprimeFlutuante() const
    {
	   std::cout << Numerador / (double) Denominador;
    }

    const Racional Racional::operator+ ( const Racional & A ) const
    {
	    Racional resultado;

	    resultado.Denominador = Denominador * A.Denominador;
	    resultado.Numerador   = resultado.Denominador / Denominador   * Numerador   +
						        resultado.Denominador / A.Denominador * A.Numerador;

	    resultado.FormaReduzida();

	    return resultado;
    }

    const Racional Racional::operator- ( const Racional & A ) const
    {
	    Racional resultado;

	    resultado.Denominador = Denominador * A.Denominador;
	    resultado.Numerador   = resultado.Denominador / Denominador   * Numerador   -
						        resultado.Denominador / A.Denominador * A.Numerador;

	    resultado.FormaReduzida();

	    return resultado;
    }

    const Racional Racional::operator* ( const Racional & A ) const
    {
	    Racional resultado;

	    resultado.Denominador = Denominador * A.Denominador;
	    resultado.Numerador   = Numerador   * A.Numerador;

	    resultado.FormaReduzida();

	    return resultado;
    }

    const Racional Racional::operator/ ( const Racional & A ) const
    {
	    // Testa se a divisao e possivel (se numerador do racional A eh diferente de zero)
	    if ( A.Numerador == 0 )
	    {
		    std::cerr << "Nao e possivel realizar a divisao desses dois numeros" 			    << std::endl;
		    std::cerr << "O resultado dessa operacao sera o racional que e o primeiro operando" << std::endl;
		    return *this;
	    }

	    Racional resultado, A_inverso( A.Denominador, A.Numerador ), Aux(*this);
	    resultado = Aux * A_inverso ;

	    resultado.FormaReduzida();

	    return resultado;
    }

    Racional& Racional::operator++ ()
    {
	    Numerador += Denominador;
	    FormaReduzida();
	    return *this;
    }

    const Racional Racional::operator++ ( int )
    {
	    Racional aux( Numerador, Denominador );
	    ++(*this);	
	    return aux;
    }

    std::ostream& operator<< (std::ostream& op, const Racional& _Racional)
    {
	    op << _Racional.Numerador << "/" << _Racional.Denominador;
	    return op;
    }
}

