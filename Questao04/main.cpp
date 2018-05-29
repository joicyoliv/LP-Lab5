#include <iostream>
using std::cout;
using std::endl;

#include <iterator>
using std::back_inserter;

#include <vector>
using std::vector;

#include <algorithm>
using std::transform;

/**
* @brief    Funcao que calcula o quadrado de um valor inteiro
* @param    val, interio que terá o seu quadrdado calculado 
* @return   Quadrado de um valor
*/
int square(int val) {
	return val * val;
}

/**
* @brief    Funcao principal para execução do programa
*/
int main(int argc, char* argv[]) {
	vector<int> col;
	vector<int> col2;
	
	//Inserir o valor de i no final de col por meio do push_back
	for (int i = 1; i <= 9; ++i) {
		col.push_back(i);
	}

	//Calcula o quadrado de cada valor de col e inseri o resultado em col2 por meio do push_back
	transform(col.begin(), col.end(), back_inserter(col2), square);

	//Imprimir os valores de col2
	for (vector<int>::iterator it = col2.begin(); it != col2.end(); ++it) {
		cout << (*it) << " ";
	}
	
	cout << endl;
	cout << "O objetivo desse código é calcular o quadrado dos números de um container, colocar os resultados em outro container e mostrar este na tela. " << endl;
	cout << endl;
	
	return 0;
}