#include "main.h"

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

/*****************************************************************************************
  Apenas para ilustrarmos as implicacoes da definicao do namespace Matematica a diretiva
  using namespace Matematica abaixo nao foi incorporada ao codigo; ela aparece comentada.
******************************************************************************************/

//using namespace Matematica;

int main()
{
	/********************************************************************************
	******** Testes elementares - valores utilizados especificados em codigo ********
	********************************************************************************/

	//Utilizacao do operador de escopo para a correta declaracao dos objetos
	//da classe Racional, definidos no namespace Matematica.
	Matematica::Racional R(6, -7); 
	Matematica::Racional S(-3, 5);
	Matematica::Racional T(-10, -3);

	std::cout << "/********************************************************************************\n";
	std::cout << "******** Testes elementares - valores utilizados especificados em codigo ********\n";
	std::cout << "********************************************************************************/\n\n";

	std::cout << "R: " << R << std::endl;

	std::cout << "S: " << S << std::endl;

	std::cout << "T: " << T << std::endl << std::endl;

	Matematica::Racional R_S = R+S;
	std::cout << "Racional R_S = R + S: " << R_S << std::endl;

	Matematica::Racional R_T = R-T;
	std::cout << "Racional R_T = R - T: " << R_T << std::endl;

	Matematica::Racional S_R = S*R;
	std::cout << "Racional S_R = S * R: " << S_R << std::endl;

	Matematica::Racional T_R = T/R;
	std::cout << "Racional T_R = T / R: " << T_R << std::endl;

	std::cout << std::endl;


	/****************************************************************************************	
	  Teste elementar para exemplificar o funcionamento dos operadores ++ pre e pos-fixado 
	****************************************************************************************/	

	Matematica::Racional M = ++R;
	std::cout << "Operador ++ pre-fixado" << std::endl;
	std::cout << "Racional M = ++R: " << M << std::endl;
	std::cout << "Racional R: " << R << std::endl;

	std::cout << std::endl;

	Matematica::Racional N(S++);
	std::cout << "Operador ++ pos-fixado" << std::endl;
	std::cout << "Racional N = S++: " << N << std::endl;
	std::cout << "Racional S: " << S << std::endl << std::endl;


	/****************************************************************************************
	******** Testes iterativos - operacoes feitas a partir de solicitacao do usuario ********
	****************************************************************************************/

	std::cout << "/*****************************************************************************************\n";
	std::cout << "******** Testes iterativos - operacoes feitas a partir de solicitacao do usuario  ********\n";
	std::cout << "****************************************************************************************/\n\n";

	// Funciona como uma calculadora com as quatro operacoes fundamentais para numeros racionais
	// O usuario determina quais operacoes deseja fazer. As operacoes sao feitas sempre com dois
	// operandos que sao numeros racionais e com um dos quatro operadores elementares (adicao,
	// subtracao, multiplicacao e divisao). O programa permanece em execucao enquanto o usuario
	// desejar fazer uma nova conta.
	while ( true )
	{
		char resposta = 'a';
		while ( resposta != 's' && resposta != 'n' && resposta != 'h' )
		{
			std::cout << "Deseja fazer mais alguma conta? [(S) Sim / (N) Nao / (H) Help]: ";
			std::cin >> resposta;
			resposta = tolower(resposta);
		}
		if ( resposta == 'n' )
		{
			std::cout << std::endl << "Programa finalizado com sucesso!" << std::endl;
			break;
		}
		else if ( resposta == 's' )
		{
			int n1, d1, n2, d2;
			char op;
			std::string line;

			getline( std::cin, line );
			getline( std::cin, line );

			// assumi-mos que o usuario digitara o texto no formato especificado, ja
			// que a validacao da entrada nao faz parte do escopo desse trabalho
			sscanf( line.c_str(), "%d/%d %c %d/%d", &n1, &d1, &op, &n2, &d2 );

			Matematica::Racional R1(n1, d1), R2(n2, d2);

			fazConta(R1, R2, op);
		}
		else
		{
			std::cout << "------------------------------------------------------------------------------------";
			std::cout << std::endl << "Digite a operacao no formato a seguir:"    		    			   << std::endl;
			std::cout << std::endl << "[Racional_1] [operador] [Racional2], em que :\n" 				   << std::endl;
			std::cout << "\t[operador] e' um dos quatro operadores fundamentais: [+], [-], [*] ou [/]"     << std::endl;
			std::cout << "\t[Racional_n] e' no formato a/b, em que a e' o numerador e b e' o denominador " << std::endl;
			std::cout << "\n\tExemplo: 7/11 * 5/3" 													   << std::endl;
			std::cout << "------------------------------------------------------------------------------------";
			std::cout << std::endl;
		}
	}

	return 0;
}

void fazConta( const Matematica::Racional & R1, const Matematica::Racional & R2, const char op )
{
	Matematica::Racional resultado;

	switch ( op )
	{
		case '+':
		{
			resultado = R1 + R2;
			std::cout << R1 << " + " << R2 << " = " << resultado << std::endl;
			break;
		}
		case '-':
		{
			resultado = R1 - R2;
			std::cout << R1 << " - " << R2 << " = " << resultado << std::endl;
			break;
		}
		case '*':
		{
			resultado = R1 * R2;
			std::cout << R1 << " * " << R2 << " = " << resultado << std::endl;
			break;
		}
		case '/':
		{
			resultado = R1 / R2;
			std::cout << R1 << " / " << R2 << " = " << resultado << std::endl;
			break;
		}
		default:
		{
			std::cerr << "Operador " << op << " inexistente. O programa sera abortado!" << std::endl;
			exit(1);
		}
	}
}
