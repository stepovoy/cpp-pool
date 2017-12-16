#include <iostream>

class Whatever { 

	public: 

		Whatever( int n ) : _n( n ) {} 

		bool operator==( Whatever const & rhs ) { return (this->_n == rhs._n); } 
		bool operator!=( Whatever const & rhs ) { return (this->_n != rhs._n); } 
		bool operator>( Whatever const & rhs ) { return (this->_n > rhs._n); } 
		bool operator<( Whatever const & rhs ) { return (this->_n < rhs._n); } 
		bool operator>=( Whatever const & rhs ) { return (this->_n >= rhs._n); } 
		bool operator<=( Whatever const & rhs ) { return (this->_n <= rhs._n); } 

		int _n; 
}; 

template<typename U>
void swap(U & a, U & b)
{
	U c = a;
	a = b;
	b = c;
}

template<typename U>
U & min(U & a, U & b)
{
	if (a < b)
		return (a);
	
	return (b);
}

template<typename U>
U & max(U & a, U & b)
{
	if (a > b)
		return (a);
	
	return (b);
}

int main( void ) { 
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
	std::string c = "chaine1";
	std::string d = "chaine2";
	
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	return 0; 
}
