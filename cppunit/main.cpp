#include "add.hpp"
#include <string>
#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int x = std::stoi(argv[1]);
		int y = std::stoi(argv[2]);
		std::cout << argv[0] << "(" << argv[1] << "," << argv[2]  <<  ")";
		std::cout << "=" << add(x, y) << std::endl;
	}
}

