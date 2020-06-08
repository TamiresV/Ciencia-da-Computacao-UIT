#include "main.h"

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

int main()
{
	/********************************************************************************
	******** Testes elementares - valores utilizados especificados em codigo ********
	********************************************************************************/

	Racional R(6, -7);
	Racional S(-3, 5);
	Racional T(-10, -3);
	Racional U(22222, -66666);

	std::cout << "/********************************************************************************\n";
	std::cout << "******** Testes elementares - valores utilizados especificados em codigo ********\n";
	std::cout << "********************************************************************************/\n\n";

	std::cout << "R: ";
	R.Imprime();
	std::cout << std::endl;

	std::cout << "S: ";
	S.Imprime();
	std::cout << std::endl;

	std::cout << "T: ";
	T.Imprime();
	std::cout << std::endl;

	std::cout << "U: ";
	U.Imprime();
	std::cout << std::endl;

	Racional R_S = R.Soma(S);
	std::cout << "Racional R_S = R + S: ";
	R_S.Imprime();
	std::cout << std::endl;

	Racional R_T = R.Subtrai(T);
	std::cout << "Racional R_T = R - T: ";
	R_T.Imprime();
	std::cout << std::endl;

	Racional S_R = S.Multiplica(R);
	std::cout << "Racional S_R = S * R: ";
	S_R.Imprime();
	std::cout << std::endl;

	Racional T_R = T.Divide(R);
	std::cout << "Racional T_R = T / R: ";
	T_R.Imprime();
	std::cout << std::endl;

	std::cout << "Racional R: " << std::endl;
	R.Imprime();
	std::cout << " = ";
	R.ImprimeFlutuante();
	std::cout << std::endl;

	std::cout << "Racional S: " << std::endl;
	S.Imprime();
	std::cout << " = ";
	S.ImprimeFlutuante();
	std::cout << std::endl;

	std::cout << "Racional T: " << std::endl;
	T.Imprime();
	std::cout << " = ";
	T.ImprimeFlutuante();
	std::cout << std::endl;

	std::cout << "Racional U " << std::endl;
	U.Imprime();
	std::cout << " = ";
	U.ImprimeFlutuante();
	std::cout << std::endl << std::endl;

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

			Racional R1(n1, d1), R2(n2, d2);

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

void fazConta( const Racional & R1, const Racional & R2, const char op )
{
	Racional resultado;

	switch ( op )
	{
		case '+':
		{
			resultado = R1.Soma(R2);
			R1.Imprime();
			std::cout << " + ";
			R2.Imprime();
			std::cout << " = ";
			resultado.Imprime();
			std::cout << std::endl;
			break;
		}
		case '-':
		{
			resultado = R1.Subtrai(R2);
			R1.Imprime();
			std::cout << " - ";
			R2.Imprime();
			std::cout << " = ";
			resultado.Imprime();
			std::cout << std::endl;
			break;
		}
		case '*':
		{
			resultado = R1.Multiplica(R2);
			R1.Imprime();
			std::cout << " * ";
			R2.Imprime();
			std::cout << " = ";
			resultado.Imprime();
			std::cout << std::endl;
			break;
		}
		case '/':
		{
			resultado = R1.Divide(R2);
			R1.Imprime();
			std::cout << " / ";
			R2.Imprime();
			std::cout << " = ";
			resultado.Imprime();
			std::cout << std::endl;
			break;
		}
		default:
		{
			std::cerr << "Operador " << op << " inexistente. O programa sera abortado!" << std::endl;
			exit(1);
		}
	}
}
