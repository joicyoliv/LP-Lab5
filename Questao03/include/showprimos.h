
/**
* @file 	showprimos.h
* @brief 	Arquivo cabecalho com a definicao das funcoes que analisam a primaridade de um numero
* @author   Joicy Oliveira (joiicyoliv@gmail.com)
* @since    25/06/2018
* @date     25/06/2018
*/

#ifndef SHOWPRIMOS_H
#define SHOWPRIMOS_H

#include <vector>
#include <iostream>
#include <algorithm>

/**
 * @brief Functor que verifica se o número é ou não primo
 * @return True se for primo, False se não for primo
 */
class Primo
{
	public:
		Primo() {}
		bool operator()(int n) const 
		{
			for(int i = 2; i <= n / 2; ++i)
			{
			    if(n % i == 0)
			    	return false;
			}
			return true;
		}
};

/**
 * @brief Função que insere em um vetor todos os números que não primos que estaõ dentro do intervalo [1-size].
 * @param size, inteiro que será o limitar para as verificações.
 */
void show_primos(int size)
{
	std::vector<int> container ( size );
	std::iota( container.begin(), container.end(), 1 );	

	auto it = std::begin(container);
	
	std::cout << "Numeros primos [1-" << size << "]: ";
	
	while( it < std::end(container) )
	{
		it = std::find_if (it, container.end(), Primo());
		if( it < container.end() )
			std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;
}

#endif
