#include "VetorSingleton.h"

#include <iostream>
#include <fstream>

using namespace Matematica;

int main()
{
	std::cout << std::endl;

	// apontador para o VetorSingleton
	VetorSingleton * A = VetorSingleton::Instancia(10, 1);
	std::cout << "Construtor: SINGLETON (*A) = " << *A << std::endl;

	// nao deixa criar, faz B apontar para a unica instancia da classe VetorSingleton, no caso, *A
	VetorSingleton * B = VetorSingleton::Instancia(10, 1);
	std::cout << "Construtor: SINGLETON (*B) = " << *B << std::endl;

	// produto por um escalar
	(*B) *= 3;
	std::cout << "Produto por um escalar: SINGLETON (*B) = 3 * SINGLETON (*B) = " << *B << std::endl;

	// indexacao
	for ( unsigned int i = 1; i <= B->getNumElementos(); ++i )
	{
		(*B)[i-1] = i;
	}
	std::cout << "Indexacao: SINGLETON (*B) = " << *B << std::endl;
	std::cout << "Indexacao: SINGLETON (*A) = " << *A << std::endl;

	std::cout << "Digite " << A->getNumElementos() << " novos valores para serem atribuidos ao VetorSingleton: ";
	std::cin >> *A;
	std::cout << "Novo vetor SINGLETON (*A) = " << *A << std::endl;
	std::cout << "Vetor SINGLETON (*B) = " << *B << std::endl << std::endl;

	std::cout << "Fim do programa!" << std::endl;

	VetorSingleton::Finaliza();

	return 0;
}
