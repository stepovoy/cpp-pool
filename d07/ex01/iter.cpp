#include <iostream>

template<typename D>
void add(D const & type)
{
	std::cout << type << " | OK" << std::endl;
}

template<typename A>
void iter(A * array, int len, void (*f)(A const &) )
{
	int i = 0;
	while (i < len)
	{
		f(array[i]);
		i++;
	}
}

int main(void)
{
	char str[7] = "string";
	int len = 6;
	int tab[6] = {0, 1, 2, 3, 4, 5};
	std::cout << "instanciated as <char>" << std::endl;
	::iter(str, len, add<char>);
	std::cout << "instanciated as <int>" << std::endl;
	::iter(tab, len, add<int>);
	return (0);
}