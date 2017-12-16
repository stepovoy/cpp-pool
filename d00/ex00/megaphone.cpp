#include <iostream>

int main(int argc, char* argv[]) {
	if (argc < 2) 
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else {
		for (int i = 1; i < argc; i++) {
			for (int j = 0; j < strlen(argv[i]); j++) {
				if (argv[i][j] > 'a' && argv[i][j] < 'z')
					std::cout << (argv[i][j] -= 'a' - 'A');
				else
					std::cout << argv[i][j];
			}
		}
	}
	std::cout << std::endl;
}