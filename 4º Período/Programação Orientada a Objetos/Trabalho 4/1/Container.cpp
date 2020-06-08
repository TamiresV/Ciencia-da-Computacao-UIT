#include <iostream>

#include "Container.h"
#include "Fibonacci.h"
#include "Lucas.h"
#include "Pell.h"
#include "Triangular.h"
#include "Quadrados.h"
#include "Pentagonal.h"

Container::Container() {}

Container::~Container()
{
	for ( unsigned int i = 0; i < v_sequencias_ptrs.size(); ++i )
	{
		delete v_sequencias_ptrs[i];
	}
}

void Container::add_seq( Seq * seq_ptr )
{
	v_sequencias_ptrs.push_back( seq_ptr );
}

void Container::remove_seq( int i )
{
	delete v_sequencias_ptrs[i];
	v_sequencias_ptrs.erase( v_sequencias_ptrs.begin() + i );
}

Seq * Container::create_seq( int codigo, int tamanho_seq ) const
{
	Seq * new_seq;

	switch( codigo )
	{
		case FIBONACCI:
		{
			new_seq = new Fibonacci( tamanho_seq );
			break;
		}
		case LUCAS:
		{
			new_seq = new Lucas( tamanho_seq );
			break;
		}
		case PELL:
		{
			new_seq = new Pell( tamanho_seq );
			break;
		}
		case TRIANGULAR:
		{
			new_seq = new Triangular( tamanho_seq );
			break;
		}
		case QUADRADOS:
		{
			new_seq = new Quadrados( tamanho_seq );
			break;
		}
		case PENTAGONAL:
		{
			new_seq = new Pentagonal( tamanho_seq );
			break;
		}
		default:
		{
			std::cerr << "O codigo da sequencia deve pertencer ao intervalo [1-6]. "
				 	  << "O codigo fornecido e' " << codigo << "." << std::endl;
			std::cerr << "O programa sera abortado!" << std::endl;
			exit(0);
		}
	}

	return new_seq;
}

void Container::print_all_complete_seq( std::ostream & os ) const
{
	if ( v_sequencias_ptrs.empty() )
	{
		os << "Container vazio!" << std::endl;
	}
	for ( unsigned int i = 0; i < v_sequencias_ptrs.size(); ++i )
	{
		v_sequencias_ptrs[i]->print( os );
	}
}

void Container::print_all_range_seq( std::ostream & os, int a, int b ) const
{
	if ( v_sequencias_ptrs.empty() )
	{
		os << "Container vazio!" << std::endl;
	}
	for ( unsigned int i = 0; i < v_sequencias_ptrs.size(); ++i )
	{
		v_sequencias_ptrs[i]->print_range( os, a, b );
	}
}

void Container::print_all_position_seq( std::ostream & os, int a ) const
{
	if ( v_sequencias_ptrs.empty() )
	{
		os << "Container vazio!" << std::endl;
	}
	for ( unsigned int i = 0; i < v_sequencias_ptrs.size(); ++i )
	{
		v_sequencias_ptrs[i]->print_range( os, a, a );
	}
}

