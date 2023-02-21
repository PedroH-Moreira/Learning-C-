/*

Escreva uma função chamada Maximo, que recebe dois números reais e retorna o maior deles. Escreva um programa para utilizar esta função, exibindo no dispositivo de saída padrão o resultado obtido pela função. Se os dois valores forem iguais, apenas exiba um deles.

Entrada:

    Dois números reais.

Saída:

    O maior dos dois números

Exemplo de Entradas:

20.0
5.0

Exemplo de Saída:

20.0

Exemplo de Entradas:

5.0
5.0

Exemplo de Saída:

5.0

*/



#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;

float maximo (float numero1, float numero2) {
	float maior;
	maior = numero1;
	if (numero2 > numero1) {
		maior = numero2;
		}
	return maior;
	}

int main () {
	float numero, numero2;
	
	cin >> numero >> numero2;
	
	cout << maximo(numero,numero2);
	return 0;
	}