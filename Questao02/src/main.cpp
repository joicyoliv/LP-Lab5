/**
* @file     main.cpp
* @brief    Funcao principal para execução do programa
* @author   Joicy Oliveira (joiicyoliv@gmail.com)
* @since    25/06/2018
* @date     25/06/2018
*/

#include <iostream>
#include <set>


#include "print_elements.h"

using std::cout;
using std::endl;
using std::set;

int main(int argc, char const *argv[]) {

    set<int> numeros;
    numeros.insert(3);
    numeros.insert(1);
    numeros.insert(4);
    numeros.insert(1);
    numeros.insert(2);
    numeros.insert(5);


    print_elements(numeros, "Set: ");
    print_elements(numeros, "CSV Set: " , ';');

    return 0;
}