#include <iostream>
#include <iomanip>
#include <vector>
#include <cctype>

#include "Container.h"
#include "Seq.h"
#include "Fibonacci.h"

using namespace std;

int main()
{
	int lower, up, pos;
	Container container;
	Seq * new_seq = 0;

	cout << "-----------------------------------------------------------------------------" << endl;

	while ( true )
	{
		char resposta = 'a';
		int codigo;
		int tamanho_seq;

		while ( resposta != 's' && resposta != 'n' )
		{
			std::cout << endl << "Deseja realizar mais alguma operacao? [(S) Sim / (N) Nao]: ";
			std::cin >> resposta;
			resposta = tolower(resposta);
		}

		if ( resposta == 'n' )
		{
			std::cout << std::endl << "Programa finalizado com sucesso!" << std::endl;
			break;
		}
		else
		{
			cout << endl;
			cout << "As operacoes disponiveis sao:" << endl;
			cout << "--------------------------------------------------------------------------" << endl;
			cout << "1 - Criar e adicionar uma nova sequencia no container." 					 << endl;
			cout << "2 - Imprimir todas as sequencias do container ate onde foram criadas."		 << endl;
			cout << "3 - Imprimir todas as sequencias do container em um determinado intervalo." << endl;
			cout << "4 - Imprimir o i-esimo elemento de todas as sequencias do container." 		 << endl;
			cout << "5 - Imprimir uma sequencia especifica em um determinado intervalo." 		 << endl;
			cout << "6 - Imprimir o i-esimo elemento de uma sequencia especifica." 				 << endl;
			cout << "--------------------------------------------------------------------------" << endl << endl;
			cout << "Digite o codigo da operacao que deseja realizar: ";

			while ( cin >> codigo && ( codigo < 1 || codigo > 6 ) )
			{
				cout << "Digite o codigo no intervalo [1-6]: ";
			}
			cout << endl;

			switch( codigo )
			{
				case 1:
					cout << "Voce pode optar por criar as sequencias a seguir:"   << endl;
					cout << "---------------------------------------------------" << endl;
					cout << "1 - Fibonacci:  1, 1, 2,  3,  5,  8,  13,  21,  ..." << endl;
					cout << "2 - Lucas:      1, 3, 4,  7,  11, 18, 29,  47,  ..." << endl;
					cout << "3 - Pell:       1, 2, 5,  12, 29, 70, 169, 408, ..." << endl;
					cout << "4 - Triangular: 1, 3, 6,  10, 15, 21, 28,  36,  ..." << endl;
					cout << "5 - Quadrados:  1, 4, 9,  16, 25, 36, 49,  64,  ..." << endl;
					cout << "6 - Pentagonal: 1, 5, 12, 22, 35, 51, 70,  92,  ..." << endl;
					cout << "---------------------------------------------------" << endl << endl;
					cout << "Digite o codigo da sequencia que deseja criar: ";

					while ( cin >> codigo && ( codigo < 1 || codigo > 6 ) )
					{
						cout << "Digite o codigo no intervalo [1-6]: ";
					}

					cout << "Digite o tamanho inicial da sequencia que deseja criar: ";

					while ( cin >> tamanho_seq && ( tamanho_seq < 0 ) )
					{
						cout << "Digite o tamanho no intervalo [0-...): ";
					}

					new_seq = container.create_seq( codigo, tamanho_seq );
					container.add_seq( new_seq );
					cout << new_seq << endl;
					break;

				case 2:
					container.print_all_complete_seq( cout );
					break;

				case 3:
					cout << "Digite o indice do primeiro elemento do intervalo que deseja imprimir: ";
					cin >> lower;
					cout << "Digite o indice do ultimo elemento do intervalo que deseja imprimir: ";
					cin >> up;
					container.print_all_range_seq( cout, lower, up );
					break;

				case 4:
					cout << "Digite o indice do elemento que deseja imprimir de cada sequencia: ";
					cin >> pos;
					container.print_all_position_seq( cout, pos );
					break;

				case 5:
					cout << "Voce pode optar por imprimir as sequencias a seguir:"   << endl;
					cout << "---------------------------------------------------" << endl;
					cout << "1 - Fibonacci"  << endl;
					cout << "2 - Lucas" 	 << endl;
					cout << "3 - Pell" 		 << endl;
					cout << "4 - Triangular" << endl;
					cout << "5 - Quadrados"  << endl;
					cout << "6 - Pentagonal" << endl;
					cout << "---------------------------------------------------" << endl << endl;
					cout << "Digite o codigo da sequencia que deseja imprimir: ";

					while ( cin >> codigo && ( codigo < 1 || codigo > 6 ) )
					{
						cout << "Digite o codigo no intervalo [1-6]: ";
					}

					cout << "Digite o indice do primeiro elemento do intervalo que deseja imprimir: ";
					cin >> lower;
					cout << "Digite o indice do ultimo elemento do intervalo que deseja imprimir: ";
					cin >> up;
					new_seq = container.create_seq( codigo, up+1 );
					new_seq->print_range( cout, lower, up );
					break;

				case 6:
					cout << "Voce pode optar por imprimir as sequencias a seguir:"   << endl;
					cout << "---------------------------------------------------" << endl;
					cout << "1 - Fibonacci"  << endl;
					cout << "2 - Lucas" 	 << endl;
					cout << "3 - Pell" 		 << endl;
					cout << "4 - Triangular" << endl;
					cout << "5 - Quadrados"  << endl;
					cout << "6 - Pentagonal" << endl;
					cout << "---------------------------------------------------" << endl << endl;
					cout << "Digite o codigo da sequencia que deseja imprimir: ";

					while ( cin >> codigo && ( codigo < 1 || codigo > 6 ) )
					{
						cout << "Digite o codigo no intervalo [1-6]: ";
					}

					cout << "Digite o indice do elemento que deseja imprimir: ";
					cin >> pos;
					new_seq = container.create_seq( codigo, pos+1 );
					new_seq->print_range( cout, pos, pos );
					break;
			}
		}
	}

	cout << "-----------------------------------------------------------------------------" << endl;

    return 0;
}

