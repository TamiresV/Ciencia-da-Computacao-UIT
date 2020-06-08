#include "main.h"

#include <iostream>
#include <fstream>
#include <algorithm>
#include <iterator>
#include <string>
#include <set>
#include <cctype>

int main()
{
	std::string file_name;

	std::cout << std::endl << "Digite o nome do arquivo de entrada: ";
	std::cin >> file_name;

	std::ifstream input( file_name.c_str(), std::ios::in );

	if ( !input )
	{
		std::cerr << "Erro ao tentar abrir o arquivo " << file_name << "." << std::endl;
		std::cerr << "O programa sera abortado!" << std::endl;
		exit(1);
	}

	// declaracao do conjunto de numeros racionais
	std::set< Matematica::Racional, FObj > RationalSet;

	// le racionais do arquivo de entrada especializado e os armazena no set RationalSet
	copy( std::istream_iterator< Matematica::Racional >( input ),
		  std::istream_iterator< Matematica::Racional >(),
		  std::inserter( RationalSet, RationalSet.begin() ) );

	// imprime os racionais em ordem crescente
	std::cout << std::endl;
	std::cout << "Imprimindo em ordem crescente" << std::endl;
	std::cout << "-----------------------------" << std::endl;
	std::copy( RationalSet.begin(),
		 	   RationalSet.end(),
			   std::ostream_iterator<Matematica::Racional>( std::cout, "\n" ) );

	// imprime os racionais em ordem decrescente
	std::cout << std::endl;
	std::cout << "Imprimindo em ordem decrescente" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	std::copy( RationalSet.rbegin(),
		  	   RationalSet.rend(),
			   std::ostream_iterator<Matematica::Racional>( std::cout,"\n" ) );

	return 0;
}

bool FObj::operator() ( const Matematica::Racional & r1, const Matematica::Racional & r2 )
{
	double dr1 = static_cast<double>( r1.getNum() ) / r1.getDen();
	double dr2 = static_cast<double>( r2.getNum() ) / r2.getDen();
	return dr1 < dr2;
}
