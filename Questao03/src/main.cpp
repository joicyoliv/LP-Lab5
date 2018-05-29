
/**
* @file 	main.cpp
* @brief 	Funcao principal para execucao do programa
* @author   Joicy Oliveira (joiicyoliv@gmail.com)
* @since    25/06/2018
* @date     25/06/2018
*/

#include <string>
using std::atoi;

#include <vector>
using std::vector;

#include "showprimos.h"


#include <sstream>

int main(int argc, char const **argv)
{
	if (argc != 2)
	{
		std::cerr << "Argumento inválido!" << std::endl;
		abort();
	}
	
	std::stringstream limitador;
	limitador << *(argv + 1);	
	int size;
	limitador >> size;
	show_primos(size);
	
}