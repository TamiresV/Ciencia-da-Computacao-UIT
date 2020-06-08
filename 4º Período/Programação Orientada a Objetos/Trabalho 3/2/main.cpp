#include "Matrix.h"

#include <iostream>



/*****************************************************************************************
  Apenas para ilustrarmos as implicacoes da definicao do namespace Matematica a diretiva
  using namespace Matematica abaixo nao foi incorporada ao codigo; ela aparece comentada.
******************************************************************************************/

//using namespace Matematica;



int main()
{
	
/*****************************************************************************************
  Para que os objetos da classe Matrix pudessem ser corretamente declarados devemos fazer
  uso do operador de escopo ( :: ) para explicitar  ao compilador que estamos tratando da 
  classe Matrix incluida no namespace Matematica.
******************************************************************************************/
	
	Matematica::Matrix A(3, 3);			// contrutor que recebe numero de linhas e colunas
	Matematica::Matrix B(3, 3); 		// contrutor que recebe numero de linhas e colunas
	Matematica::Matrix C(A);			// contrutor de copia
	Matematica::Matrix D("matrix.in");	// contrutor que copia conteudo de um arquivo para nova matriz criada
	Matematica::Matrix E;				// construtor que recebe numero de linhas e colunas com parametros default

	std::cout << std::endl << std::endl;

	std::cout << "Matriz A:" << std::endl << A << std::endl;	//Utilizando o operador '<<' sobrecarregado

	std::cout << "Matriz B:" << std::endl  << B << std::endl;	//Utilizando o operador '<<' sobrecarregado

	std::cout << "Matriz C:" << std::endl  << C << std::endl;	//Utilizando o operador '<<' sobrecarregado

	std::cout << "Matriz D:" << std::endl  << D << std::endl;	//Utilizando o operador '<<' sobrecarregado

	std::cout << "Matriz E:" << std::endl  << E << std::endl;	//Utilizando o operador '<<' sobrecarregado

	D.Grava("matrix.out");

	A.InicializaAleatorio(-10, 6);
	std::cout << "Matriz A:" << std::endl  << A << std::endl;	//Utilizando o operador '<<' sobrecarregado

	B.InicializaAleatorio(0, 20);
	std::cout << "Matriz B:" << std::endl  << B << std::endl;	//Utilizando o operador '<<' sobrecarregado


	/**********************************************************************************
	  EXEMPLO BASICOS DE UTILIZACAO DOS OPERADORES +, * E = SOBRECARREGADOS PARA ESSA
	                              APLICACAO DE MATRIZES!
	**********************************************************************************/

	Matematica::Matrix F;
	F = A+B; //utilizando os operadores '+' e '=' sobrecarregados
	std::cout << std::endl << std::endl;
	std::cout << "Matriz F = A + B:" << std::endl  << F << std::endl;

	std::vector<double> v(4);
	std::cout << "Vector v: ";
	for ( int i = 0; i < 4; i++ )
	{
		v[i] = i;
		std::cout << v[i] << " ";
	}
	std::cout << std::endl << std::endl;

	Matematica::Matrix G;
	G = D*v; //utilizando os operadores '*' e '=' sobrecarregados
	std::cout << std::endl << std::endl;
	std::cout << "Matriz G = D * v:" << std::endl  << G << std::endl;

	return 0;
}

