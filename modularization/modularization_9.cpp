/*


Escreva uma função que recebe um número inteiro e retorna seu valor absoluto. Um bom planejamento da passagem de parâmetros é parte importante da avaliação.

Escreva um programa para utilizar esta função. O programa deve ler vários números inteiros e escrever o valor absoluto de cada um deles. Não é necessário fazer todas as leituras antes de fazer as escritas. Não é permitido usar uma função de biblioteca para calcular o valor absoluto.

Entradas:

    A quantidade de números a processar;
    Vários números inteiros para processar (um em cada linha).

Saídas:

    O valor absoluto de cada um dos números.

Exemplo de Entrada:

3
0
42
-7

Exemplo de Saída:

0 42 7

*/

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int valorAbsoluto (int numero) {
	if (numero < 0) {
		numero *= (-1);
		}
	return numero;
	}

int main () {
	int qtdNumeros, numeros, cont = 0;
	
	cin >> qtdNumeros;
	
	while (cont < qtdNumeros) {
		cin >> numeros;
		cout << valorAbsoluto(numeros) << endl;
		cont++;
		}
	
	
	return 0;
}
