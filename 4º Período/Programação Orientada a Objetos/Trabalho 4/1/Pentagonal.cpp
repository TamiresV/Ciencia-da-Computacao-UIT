#include "Pentagonal.h"

Pentagonal::Pentagonal()
{
    set_num_elem( 0 );
}

Pentagonal::Pentagonal( int i )
{
    set_num_elem( 0 );
    gen_elems( i );
}

void Pentagonal::gen_elems( int i )
{
	int tam = static_cast<int>( get_num_elem() );
    if ( i > tam )
    {
		for ( int j = tam; j < i; ++j )
		{
			add_elem( ( j + 1 ) * ( 3 * j + 2 ) / 2 );
			set_num_elem( j+1 );
		}
    }
}

