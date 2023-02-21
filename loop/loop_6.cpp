/*


Desenvolva um programa que exiba no dispositivo de saída padrão a sequência da série de Fibonacci até o termo N, lembrando que esta série é definida da seguinte forma:

Fib(1) = 0
Fib(2) = 1
Fib(N) = Fib(N - 2) + Fib (N -1)

A entrada deve ser constituída de um número inteiro N que corresponde à posição do último termo desejado.

Cada valor da sequência até o termo N deve ser exibido separadamente no dispositivo de saída padrão.

Entradas:

    Número inteiro N que indica a quantidade de termos da sequência de Fibonacci a serem exibidos.

Saídas:

    Sequência de números inteiros que indica os N primeiros valores da sequência de Fibonacci .

Exemplo de entrada:

7

Exemplo de saída:

0
1
1
2
3
5
8

Exemplo de entrada:

1

Exemplo de saída:

0



*/



#include <iostream>
#include <iomanip>

using namespace std;

int main () {
	int numero, n1, n2, fibonacci;
	n1 = 0;
	n2 = 1;
	
	cin >> numero;
	
	if (numero == 1) {
		cout << 0;
		}else if (numero == 2) {
		cout << 0 << endl << 1;
		}else {
			cout << 0 << endl << 1 << endl;
			while (numero - 2 != 0) {
				fibonacci = n1 + n2;
				n1 = n2;
				n2 = fibonacci;
				cout << fibonacci << endl;
				numero--;
				}
			}
	
	return 0;
}