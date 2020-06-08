#include "main.h"

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // nomes dos arquivos de entrada e de saida
    string input_file_name;
    string output_file_name;

    // solicita nome do arquivo de entrada para usuario, o salva na variavel
    // input_file_name e determina nome para arquivo de saida
    // se nome do arquivo de entrada e' X.cpp,o de saida sera Xnocomments.cpp
    cout << "Digite o nome do arquivo fonte C++ (extensao .cpp): ";
    cin >> input_file_name;
    output_file_name = input_file_name;
    output_file_name.insert( output_file_name.size() - 4, "nocomments" );

    // abre arquivo de entrada de nome input_file_name para leitura
    // e de saida de nome output_file_name para escrita
    ifstream input_file( input_file_name.c_str(), ios::in );
    ofstream output_file( output_file_name.c_str(), ios::out );

    // armazena uma linha do arquivo de entrada
    string original_line;
    
    // linha apos remocao de comentarios
    string transformed_line;
    
    // igual a true se o primeiro caractere da linha faz parte de um comentario
    bool starts_being_a_comment = false;

    if ( !input_file )
    {
        cerr << "Nao foi possivel abrir o arquivo solicitado! Saindo..." << endl;
		cerr << "O programa sera abortado!" << endl;
		exit(1);
    }

    // enquanto existirem linhas para serem lidas no arquivo, le tal linha e remove seus comentarios
    while ( getline( input_file, original_line ) )
    {
        transformed_line = remove_comments( original_line, starts_being_a_comment );
        output_file << transformed_line;
    }

    // fecha arquivo de entrada
    input_file.close();
    output_file.close();

    return 0;
}

string remove_comments( const string & ori_line, bool & starts_in_a_comment )
{
    // string original removendo-se os comentarios
    string transformed_line;
    
    // copy == true se caractere atual deve ser copiado para a nova string
    bool copy = !starts_in_a_comment;

    for ( unsigned int i = 0; i < ori_line.size(); ++i )
    {
        // potencial inicio de comentario
        if ( ori_line[i] == '/' )
        {
            if ( i+1 != ori_line.size() )
            {
                // se comentario com //, descarta-se o restante da linha
                if ( ori_line[i+1] == '/' )
                {
                    break;
                }
                // se comentario com /*, caracter atual nao deve ser copiado
                if ( ori_line[i+1] == '*' )
                {
                    copy = false;
                }
            }
        }
        // potencial fim de comentario
        else if ( ori_line[i] == '*' )
        {
            if ( i+1 != ori_line.size() )
            {
                if ( ori_line[i+1] == '/' )
                {
                    copy = true;
                    ++i;
                    continue;
                }
            }
        }
        // copia caracter atual no arquivo de saida caso este deva ser copiado
        if ( copy )
        {
            transformed_line.push_back( ori_line[i] );
        }
    }

    // para evitar que linhas no arquivo de entrada que sejam completamente comentarios,
    // sejam impressas como linhas vazias no arquivo de saida
    if ( !transformed_line.empty() || !starts_in_a_comment ) transformed_line.push_back('\n');

    // para determinar se o inicio da proxima linha que sera lida fara parte de um comentario
    starts_in_a_comment = !copy;

    return transformed_line;
}

