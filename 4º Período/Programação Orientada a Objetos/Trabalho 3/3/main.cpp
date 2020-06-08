#include "Vetor.h"

#include <iostream>
#include <fstream>

using namespace Matematica;

int main()
{
	// Construtores
	Vetor A;															// construtor default (vetor vazio)
	std::cout << std::endl << "Construtor default: A = " << A << std::endl;

	Vetor B(5);															// vetor com 5 elementos iguais a 0
	std::cout << "Construtor: B = " << B << std::endl;

	Vetor C(5,1);														// vetor com 5 elementos iguais a 1
	std::cout << "Construtor: C = " << C << std::endl;

	Vetor D( C );														// construtor de copia
	std::cout << "Construtor de copia: D = C = " << D << std::endl;

	// Operadores
	Vetor E;
	E = D;																// atribuicao
	std::cout << "Operador de atribuicao: E = D = " << E << std::endl;

	E = 3 * C;															// produto por um escalar
	std::cout << "Produto por um escalar: E = 3 * C = " << E << std::endl;

	E = D * 5;															// produto por um escalar
	std::cout << "Produto por um escalar: E = D * 5 = " << E << std::endl;

	Vetor F, G;
	F = C + E;															// soma
	std::cout << "Operador de soma: F = C + E = " << F << std::endl;

	G = E - F;															// subtracao
	std::cout << "Operador de subtracao: G = E - F = " << G << std::endl;

	unsigned int tam=5;
	Vetor H(tam);
	for ( unsigned int i = 1; i <= tam; ++i )
	{
		H[i-1] = i*i;														// indexacao
	}
	std::cout << "Indexacao: H = " << H << std::endl;

	double produto = C % H;										// produto interno
	std::cout << "Produto interno: C % H = " << produto << std::endl;

	int n=5;
	Vetor I(n);
	std::cout << "Digite 5 elementos para um novo vetor I, separados por um espaco: ";
	std::cin >> I;
	std::cout << "Novo vetor I = " << I << std::endl;

	I += C;
	std::cout << "Operador de soma: I += C = " << I << std::endl;

	I -= H;
	std::cout << "Operador de soma: I -= H = " << I << std::endl << std::endl;

	std::cout << "Fim do programa!" << std::endl;

	return 0;
}

