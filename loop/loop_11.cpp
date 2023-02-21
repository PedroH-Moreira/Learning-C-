/*


Faça um programa que escreve tabuleiros quadrados de tamanho variável. O programa deve usar iteração para tratar o tamanho variável.

Um tabuleiro é um quadrado com posições pretas e brancas dispostas alternadamente. Para representar as posições de cores diferentes, use o caractere # (cerquilha) para posições pretas e . (ponto) para posições brancas. O canto superior esquerdo do tabuleiro deve ser branco.

Obs: em Python para imprimir uma variável string texto e a próxima impressão continuar na mesma linha, você pode usar: print(texto, end="")

Entradas:

    Um número inteiro que descreve as dimensões do tabuleiro (número de linhas e colunas).

Saídas:

    Sequências alternadas dos caracteres # e . (sem espaços em branco) em linhas diferentes, criando a aparência de um tabuleiro.

Exemplo de entrada:

5

Exemplo de saída:

.#.#.
#.#.#
.#.#.
#.#.#
.#.#.


*/



#include <iostream>
#include <cmath>

using namespace std;
int main () {
	int numero, cont = 0, linha;
	
	cin >> numero;
	linha = 1;
	while (linha <=  numero) {
		cont = 0;
		if (linha%2 != 0){
			while (numero - cont != 0) {
			cont++;
			if (cont%2 !=0) {
				cout << ".";
				}else {cout << "#";
					}
			}
			}
		if (linha%2 == 0) {
			while (numero - cont != 0) {
				cont++;
				if (cont%2 != 0) {
					cout << "#";
					} else {cout << ".";
						}
				}
			}
		cout << endl;
		linha++;
		}
	
	return 0;
	
}