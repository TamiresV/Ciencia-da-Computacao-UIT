#include "Triangular.h"

Triangular::Triangular()
{
    set_num_elem( 0 );
}

Triangular::Triangular( int i )
{
    set_num_elem( 0 );
    gen_elems( i );
}

void Triangular::gen_elems( int i )
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
			else
			{
				add_elem( elem(j-1) + j + 1 );
			}
			set_num_elem( j+1 );
		}
    }
}

