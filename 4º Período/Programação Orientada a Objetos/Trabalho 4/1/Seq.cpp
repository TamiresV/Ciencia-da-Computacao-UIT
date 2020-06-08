#include "Seq.h"
#include "Seq.inl"

#include <iostream>

unsigned long int Seq::elem( unsigned int i )
{
    if ( i + 1 > num_elem )
    {
        gen_elems( i + 1 );
    }
    return elementos[i];
}

unsigned int Seq::length() const
{
    return num_elem;
}

std::ostream & operator<< ( std::ostream & os, Seq * seq )
{
	seq->print(os);
	return os;
}

void Seq::print( std::ostream & os ) const
{
	os << "Sequencia: ";
	for ( unsigned int i = 0; i < num_elem; ++i )
	{
		os << elementos[i] << " ";
	}
	std::cout << std::endl;
}

void Seq::print_range( std::ostream & os, unsigned int a, unsigned int b )
{
	os << "Sequencia: ";
	if ( b > num_elem )
	{
		gen_elems( b );
	}
	for ( unsigned int i = a-1; i < b && i < num_elem; ++i )
    {
        os << elementos[i] << " ";
    }
	std::cout << std::endl;
}

