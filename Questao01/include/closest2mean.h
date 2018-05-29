
/**
* @file     closest2mean.h
* @brief    Arquivo cabecalho com as definicoes das funcoes que retorna o valor mais próximo da média do intervalo
* @author   Joicy Oliveira (joiicyoliv@gmail.com)
* @since    25/06/2018
* @date     25/06/2018
*/

#ifndef CLOSEST2MEAN_H
#define CLOSEST2MEAN_H

#include <iostream>
#include <iterator>
#include <complex>
#include <cstdlib>
#include <numeric>

using std::accumulate;
using std::cout;
using std::endl;


/**
* @brief    Funcao que calcula media de um intervalo e retorna o numero mais proximo da media
* @param    first, iterator apontando para o valor de inicio do intervalo
* @param    last, iterator apontando para o valor final do intervalo
* @return   retorna um iterador para o valor mais proximo
*/
template<typename InputIterator>
InputIterator closest2mean(InputIterator first, InputIterator last) {
    
    int qtd_Numeros = 0;
    
    for(InputIterator i = first; i != last; ++i){ 
        ++qtd_Numeros;
    }   
    

    float media = std::accumulate( first, last, 0 ) / qtd_Numeros;

    cout << "Média: " << media << endl;
    
    InputIterator aux = first;
    
   
    while ( first != last )
    {
        if ( std::abs((*first - media)) < std::abs((*aux - media)) )
        {
             aux = first;
        }
        std::advance( first , 1 );
    }


    return aux;
}

#endif