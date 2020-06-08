#include "Lucas.h"

Lucas::Lucas()
{
    set_num_elem( 0 );
}

Lucas::Lucas( int i )
{
    set_num_elem( 0 );
    gen_elems( i );
}

void Lucas::gen_elems( int i )
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
				add_elem( 3 );
			}
			else
			{
				add_elem( elem(j-2) + elem(j-1) );
			}
			set_num_elem( j+1 );
		}
    }
}
