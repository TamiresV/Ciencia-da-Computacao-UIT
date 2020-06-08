#include <fstream>
#include <iostream>
#include <map>
#include <utility>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	string file_name;

	cout << endl;
	cout << "Digite o nome do arquivo de entrada que contem os dados para gerar a lista: ";
	cin >> file_name;

	ifstream input( file_name.c_str(), ios::in );

	if ( !input )
	{
		cerr << "Erro ao tentar abrir o arquivo " << file_name << "." << endl;
		cerr << "O programa sera abortado!" << endl;
		exit(1);
	}

	multimap< string, pair<string, string> > MM_list;
	string name, adress, phone;

	while ( !input.eof() )
	{
		getline( input, name );
		getline( input, adress );
		getline( input, phone );

		MM_list.insert( pair< string, pair<string, string> >( name, pair<string, string>( adress, phone ) ) );
	}

	cout << endl << "----------------------------" << endl;
	cout << "Lista carregada com sucesso!" << endl;
	cout << "----------------------------" << endl << endl;

	cout << "Lista:" << endl;
	cout << "------" << endl;
	for( multimap< string, pair<string, string> >::iterator iter = MM_list.begin(); iter != MM_list.end(); ++iter )
	{
		cout << "  Nome: " << iter->first << "; Endereco: " << iter->second.first << "; Telefone: " << iter->second.second << endl;
	}

	while ( true )
	{
		char asw = 'a';

		while ( asw != 's' && asw != 'n' )
		{
			cout << endl << "Deseja pesquisar algum nome na lista? [(S) Sim / (N) Nao]: ";
			cin >> asw;
			asw = tolower(asw);
		}

		if ( asw == 'n' )
		{
			cout << endl << "Programa finalizado com sucesso!" << std::endl;
			break;
		}

		cout << endl;
		cout << "Digite o nome da pessoa que deseja pesquisar: ";
		getline( cin, name );
		getline( cin, name );

		bool exist = false;
		for ( multimap< string, pair<string, string> >::iterator it = MM_list.begin(); it != MM_list.end(); ++it )
		{
			if ( it->first == name )
			{
				exist = true;
				cout << endl;
				cout << "Endereco: " << it->second.first << endl;
				cout << "Telefone: " << it->second.second << endl;
			}
		}
		if ( !exist )
		{
			cout << "Pessoa com o nome \"" << name << "\" nao encontrada." << endl;
		}
	}

	return 0;
}
