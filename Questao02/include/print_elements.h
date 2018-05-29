/**
* @file print_elements.h
* @brief    Arquivo cabecalho com a definicao da funcao que imprimi os elementos de um container
* @author   Joicy Oliveira (joiicyoliv@gmail.com)
* @since    25/06/2018
* @date     25/06/2018
*/

#ifndef PRINT_ELEMENTS_H
#define PRINT_ELEMENTS_H

#include <iostream>
#include <algorithm>
using std::sort;
/**
* @brief    Funcao que realiza impressão de um container com um separador
* @param    collection, Tipo generico container
* @param    label, Char usado na impressão
* @param    separator, Char que separa os valores do container
* @return   Não retorna valor
*/
template<typename TContainer>
void print_elements(const TContainer& collection, const char *label="", const char separator= ' ') {

    typename TContainer::iterator it;

    std::cout << label;

    for (it = collection.begin(); it != collection.end(); it++) {
        std::cout << *it << separator ;
    }

    std::cout << std::endl;
}

#endif