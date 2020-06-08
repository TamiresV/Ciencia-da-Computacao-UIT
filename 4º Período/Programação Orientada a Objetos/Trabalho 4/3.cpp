#include <iostream>
#include <algorithm>
#include <fstream>

#include "TemplateVetor.h"
//#include "TemplateMatrix.h"
//
using namespace std;

template <typename iterator> iterator maximum( iterator begin, iterator end )
{
	if ( begin == end )
	{
		return begin;
	}

	iterator result = begin;
	while ( ++begin != end )
	{
		if ( *result < *begin )
		{
			result = begin;
		}
	}

	return result;

}

bool lessThanFive( int k )
{
	return k < 5;
}

int main()
{
	Vetor<int> v( 20 );

	typedef Vetor<int>::iterator ivull;

	for ( int i = 0; i < 20; i++ )
	{
		v[ i ] = static_cast<int>( 13 - i*i ) % 14;
	}

	for ( Vetor<int>::iterator it = v.begin(); it != v.end(); ++it )
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	ivull n = find_if ( v.begin(), v.end(), lessThanFive );

	if ( n != v.end() )
	{
		cout << "n == " << *n << endl;
	}

	ivull m = maximum( v.begin(), v.end() );

	cout << "m == " << *m << endl;



	return 0;
}

