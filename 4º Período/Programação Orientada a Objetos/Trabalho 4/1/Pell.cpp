#include "Pell.h"

Pell::Pell()
{
    set_num_elem( 0 );
}

Pell::Pell( int i )
{
    set_num_elem( 0 );
    gen_elems( i );
}

void Pell::gen_elems( int i )
{
	int tam = static_cast<int>( get_num_elem() );
	if ( i > tam )
	{
		for ( int j = tam; j < i; ++j )
		{
			if ( j == 0 )
			{
				add_elem( 1 );
			}
			else if ( j == 1 )
			{
				add_elem( 2 );
			}
			else
			{
				add_elem( elem(j-2) + 2 * elem(j-1) );
			}
			set_num_elem( j+1 );
		}
	}
}

