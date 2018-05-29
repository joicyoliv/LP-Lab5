
/**
* @file     main.cpp
* @brief    Funcao principal para execução do programa
* @author   Joicy Oliveira (joiicyoliv@gmail.com)
* @since    25/06/2018
* @date     25/06/2018
*/

#include <iostream>
#include <vector>
#include "closest2mean.h"

using std::cout;
using std::endl;
using std::vector;


int main(int argc, char const *argv[]) {

 vector<int> v = { 1, 2, 3, 30, 40, 50 };
 auto result = closest2mean (v.begin(), v.end());
 cout << "O valor mais próximo da média eh :  "<<(*result) << endl;

 return 0;
}