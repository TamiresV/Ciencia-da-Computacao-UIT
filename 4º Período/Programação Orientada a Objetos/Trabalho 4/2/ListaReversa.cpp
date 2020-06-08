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

	map< string, pair<string, string> > M_list;
	string name, adress, phone;

	while ( !input.eof() )
	{
		getline( input, name );
		getline( input, adress );
		getline( input, phone );

		M_list.insert( pair< string, pair<string, string> >( phone, pair<string, string>( name, adress ) ) );
	}

	cout << endl << "------------------------------------" << endl;
	cout << "Lista reversa carregada com sucesso!" << endl;
	cout << "------------------------------------" << endl << endl;

	cout << "Lista reversa:" << endl;
	cout << "--------------" << endl;
	for( map< string, pair<string, string> >::iterator iter = M_list.begin(); iter != M_list.end(); ++iter )
	{
		cout << " Telefone: " << iter->first << "; Nome: " << iter->second.first << "; Endereco: " << iter->second.second << endl;
	}

	while ( true )
	{
		char asw = 'a';

		while ( asw != 's' && asw != 'n' )
		{
			cout << endl << "Deseja pesquisar algum telefone na lista? [(S) Sim / (N) Nao]: ";
			cin >> asw;
			asw = tolower(asw);
		}

		if ( asw == 'n' )
		{
			cout << endl << "Programa finalizado com sucesso!" << std::endl;
			break;
		}

		cout << endl;
		cout << "Digite o telefone que deseja pesquisar: ";
		getline( cin, phone );
		getline( cin, phone );

		bool exist = false;
		for ( map< string, pair<string, string> >::iterator it = M_list.begin(); it != M_list.end(); ++it )
		{
			if ( it->first == phone )
			{
				exist = true;
				cout << endl;
				cout << "Nome: " << it->second.first << endl;
				cout << "Endereco: " << it->second.second << endl;
			}
		}
		if ( !exist )
		{
			cout << "Telefone \"" << phone << "\" nao encontrado." << endl;
		}
	}

	return 0;
}
