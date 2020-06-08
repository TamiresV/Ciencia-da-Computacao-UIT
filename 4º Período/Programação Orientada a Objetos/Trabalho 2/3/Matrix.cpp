#include "Matrix.h"

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <ctime>
#include <cstdlib>

Matrix::Matrix( unsigned int lin, unsigned int col ): Linhas(lin), Colunas(col)
{
	std::cout << "Inicio do contrutor padrao de uma matriz com " << Linhas
			  << " linhas e " << Colunas << " colunas." << std::endl;

	// verifica se valores fornecidos para Linhas e Colunas sao validos
	if ( Linhas <= 0 || Colunas <= 0 )
	{
		std::cerr << "Nao e' possivel criar uma matriz com essas dimensoes!" << std::endl;
		throw TamanhoInviavel();
	}

	// aloca memoria
	matriz = new double * [Linhas];

	for( unsigned int i = 0; i < Linhas; ++i )
	{
		matriz[i] = new double[Colunas];
	}

	// inicializa todas as posicoes da matriz com 0
	for ( unsigned int i = 0; i < Linhas; ++i )
	{
		for ( unsigned int j = 0; j < Colunas; ++j )
		{
			matriz[i][j] = 0;
		}
	}

	std::cout << "Fim do contrutor padrao de uma matriz com " << Linhas
			  << " linhas e " << Colunas << " colunas." << std::endl;
}

Matrix::Matrix( const std::string & nome_arquivo )
{
	std::cout << "Inicio do contrutor de uma matriz a partir de um arquivo." << std::endl;

	std::ifstream entrada( nome_arquivo.c_str(), std::ios::in );

	if ( !entrada )
	{
		std::cerr << "Nao foi possivel abrir o arquivo " << nome_arquivo << std::endl;
		std::cerr << "O programa sera abortado!" << std::endl;
		exit(1);
	}

	int linhas, colunas;

	entrada >> linhas >> colunas;

	Linhas  = linhas;
	Colunas = colunas;

	// aloca memoria
	matriz = new double * [Linhas];

	for( unsigned int i = 0; i < Linhas; ++i )
	{
		matriz[i] = new double[Colunas];
	}

	// faz copia do conteudo do arquivo para a matriz
	double aux;
	for ( unsigned int i = 0; i < Linhas; ++i )
	{
		for ( unsigned int j = 0; j < Colunas; ++j )
		{
			entrada >> aux;
			matriz[i][j] = aux;
		}
	}

	entrada.close();

	std::cout << "Fim do contrutor de uma matriz a partir de um arquivo." << std::endl;
}

Matrix::Matrix( const Matrix & m ): Linhas(m.Linhas), Colunas(m.Colunas)
{
	std::cout << "Inicio do contrutor de copia de uma matriz com " << Linhas
			  << " linhas e " << Colunas << " colunas." << std::endl;

	// aloca memoria
	matriz = new double * [Linhas];

	for( unsigned int i = 0; i < Linhas; ++i )
	{
		matriz[i] = new double[Colunas];
	}

	// faz copia
	for ( unsigned int i = 0; i < Linhas; ++i )
	{
		for ( unsigned int j = 0; j < Colunas; ++j )
		{
			matriz[i][j] = m.matriz[i][j];
		}
	}

	std::cout << "Fim do contrutor de copia de uma matriz com " << Linhas
			  << " linhas e " << Colunas << " colunas." << std::endl;
}

Matrix & Matrix::operator= ( const Matrix & m )
{
	std::cout << "Inicio do operador de atribuicao de uma matriz com " << m.Linhas
			  << " linhas e " << m.Colunas << " colunas." << std::endl;

	// para testar se esta sendo feita uma atruicao do tipo: Matrix1 = Matrix1;
	if ( this == &m )
	{
		return *this;
	}

	// desaloca memoria
	for( unsigned int i = Linhas; i > 0; --i )
	{
		delete [] matriz[i-1];
	}

	delete [] matriz;

	// salva novos valores de Linhas e Colunas
	Linhas  = m.Linhas;
	Colunas = m.Colunas;

	// aloca memoria
	matriz = new double * [Linhas];

	for( unsigned int i = 0; i < Linhas; ++i )
	{
		matriz[i] = new double[Colunas];
	}

	// faz copia
	for ( unsigned int i = 0; i < Linhas; ++i )
	{
		for ( unsigned int j = 0; j < Colunas; ++j )
		{
			matriz[i][j] = m.matriz[i][j];
		}
	}

	std::cout << "Fim do operador de atribuicao de uma matriz com " << m.Linhas
			  << " linhas e " << m.Colunas << " colunas." << std::endl;

	// retorna uma referencia para *this
	return *this;
}

Matrix::~Matrix()
{
	std::cout << "Inicio do destrutor de uma matriz com " << Linhas
			  << " linhas e " << Colunas << " colunas." << std::endl;

	// desalocacao de memoria (feita na ordem inversa da alocacao)
	for( unsigned int i = Linhas; i > 0; --i )
	{
		delete [] matriz[i-1];
	}

	delete [] matriz;

	std::cout << "Fim do destrutor de uma matriz com " << Linhas
			  << " linhas e " << Colunas << " colunas." << std::endl;
}

void Matrix::Imprime() const
{
	for ( unsigned int i = 0; i < Linhas; ++i )
	{
		for ( unsigned int j = 0; j < Colunas; ++j )
		{
			std::cout << matriz[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

// grava no seguinte formato:
// Linha 1: Dois inteiros positivos M e N representando, respectivamente,
//			o numero de linhas e de colunas da matriz
// Proximas M linhas: N valores separados por um espaco
void Matrix::Grava( const std::string & nome_arquivo ) const
{
	std::ofstream saida( nome_arquivo.c_str(), std::ios::out );

	if ( !saida )
	{
		std::cerr << "Nao foi possivel abrir o arquivo " << nome_arquivo << std::endl;
		std::cerr << "O programa sera abortado!" << std::endl;
		exit(1);
	}

	saida << Linhas << " " << Colunas << std::endl;

	for ( unsigned int i = 0; i < Linhas; ++i )
	{
		for ( unsigned int j = 0; j < Colunas; ++j )
		{
			saida << matriz[i][j] << " ";
		}
		saida << std::endl;
	}

	saida.close();
}


// soma duas matrizes e retorna o resultado por copia
Matrix Matrix::Soma( const Matrix & A ) const
{
	if ( Linhas != A.Linhas || Colunas != A.Colunas )
	{
		std::cerr << "Nao e' possivel fazer a soma das duas matrizes, pois suas dimensoes sao diferentes!" << std::endl;
		throw OperacaoInviavel();
	}

	Matrix resultado(Linhas, Colunas);

	for ( unsigned int i = 0; i < Linhas; ++i )
	{
		for ( unsigned int j = 0; j < Colunas; ++j )
		{
			resultado.matriz[i][j] = matriz[i][j] + A.matriz[i][j];
		}
	}

	return resultado;
}

// multiplica matriz por um vetor e retorna resultado por copia
Matrix Matrix::Multiplica( const std::vector<double> & V ) const
{
	if ( Colunas != V.size() )
	{
		std::cerr << "Nao e' possivel fazer a soma das duas matrizes, pois suas dimensoes sao diferentes!" << std::endl;
		throw OperacaoInviavel();
	}

	Matrix resultado(Linhas, 1);

	for ( unsigned int i = 0; i < Linhas; ++i )
	{
		for ( unsigned int j = 0; j < Colunas; ++j )
		{
			resultado.matriz[i][0] += matriz[i][j] * V[j];
		}
	}

	return resultado;
}

// inicializa matrix com valores aleatorios no intervalo [inferior, superior]
void Matrix::InicializaAleatorio( const int inferior, const int superior )
{
	srand( time(NULL) );
	for ( unsigned int i = 0; i < Linhas; ++i )
	{
		for ( unsigned int j = 0; j < Colunas; ++j )
		{
			matriz[i][j] = rand() % ( superior - inferior + 1 ) + inferior;
		}
	}
}
