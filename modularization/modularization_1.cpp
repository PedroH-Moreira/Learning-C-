/*

Escreva uma função chamada Media, que recebe dois números reais e retorna sua média. Escreva um programa para utilizar esta função.

Obs: soluções em Python devem possuir um subprograma chamado principal.

Entrada:

    Dois números reais (ponto flutuante). Um em cada linha.

Saída:

    A média desses dois números (ponto flutuante).

Exemplo de Entrada:

2
8

Exemplo de Saída:

5

Exemplo de Entrada:

4
5

Exemplo de Saída:

4.5


*/

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

float media(float n1, float n2) {
	float media;
	media = (n1+n2)/2;
	cout << media;
	return media;
	}

int main () {
	float a, b;
	cin >> a >> b;
	media(a,b);
	return 0;
	}

