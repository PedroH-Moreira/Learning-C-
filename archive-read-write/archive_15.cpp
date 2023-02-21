/*


Desenvolva um programa que escreva em um arquivo de saída resultado.txt a sequência da série de Fibonacci até o termo N, lembrando que esta série é definida da seguinte forma:

Fib(1) = 0
Fib(2) = 1
Fib(N) = Fib(N - 2) + Fib (N -1)

A entrada deve ser constituída de um número inteiro N que corresponde à posição do último termo desejado.

Cada valor da sequência até o termo N deve ser exibido separadamente no dispositivo de saída padrão.

Entradas:

    Número inteiro N que indica a quantidade de termos da sequência de Fibonacci a serem exibidos.

Saídas (arquivo resultado.txt):

    Sequência de números inteiros que indica os N primeiros valores da sequência de Fibonacci .

Exemplo de entrada:

7

Exemplo de saída (arquivo resultado.txt):

0
1
1
2
3
5
8

Exemplo de entrada:

1

Exemplo de saída (arquivo resultado.txt):

0


*/

#include <iostream>
#include <fstream>
using namespace std;

int main () {
	int num, fb1 = 0, fb2 = 1, fbn;
	cin >> num;
	
	ofstream arq ("resultado.txt");
	if (num == 1) {
		arq << 0;
		} else if (num == 2) {
			arq << 0 << "\n" << 1;
			} else {
				arq << 0 << "\n" << 1 << "\n";
				while (num - 2 != 0) {
					fbn = fb1 + fb2;
					fb1 = fb2;
					fb2 = fbn;
					arq << fbn << endl;
					num -= 1;
					}
				}
	arq.close();

	return 0;
}

