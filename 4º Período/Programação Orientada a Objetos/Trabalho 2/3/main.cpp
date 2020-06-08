#include "Matrix.h"

#include <iostream>

int main()
{
	Matrix A(3, 3);			// contrutor que recebe numero de linhas e colunas
	Matrix B(3, 3); 		// contrutor que recebe numero de linhas e colunas
	Matrix C(A);			// contrutor de copia
	Matrix D("matrix.in");	// contrutor que copia conteudo de um arquivo para nova matriz criada
	Matrix E;				// construtor que recebe numero de linhas e colunas com parametros default

	A.Imprime();
	std::cout << std::endl;

	B.Imprime();
	std::cout << std::endl;

	C.Imprime();
	std::cout << std::endl;

	D.Imprime();
	std::cout << std::endl;

	E.Imprime();
	std::cout << std::endl;

	D.Grava("matrix.out");

	A.InicializaAleatorio(-10, 6);
	A.Imprime();
	std::cout << std::endl;

	B.InicializaAleatorio(0, 20);
	B.Imprime();
	std::cout << std::endl;

	Matrix F;
	F = A.Soma(B); // era melhor fazer Matriz F = A.Soma(B). Fizemos assim so para mostrar o operador de atribuicao
	F.Imprime();
	std::cout << std::endl;

	std::vector<double> v(4);
	for ( int i = 0; i < 4; i++ )
	{
		v[i] = i;
		std::cout << v[i] << " ";
	}
	std::cout << std::endl << std::endl;

	Matrix G( D.Multiplica(v) );
	G.Imprime();
	std::cout << std::endl;

	return 0;
}

