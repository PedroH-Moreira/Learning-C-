/*


Faça um programa que escreve tabuleiros quadrados de tamanho variável no arquivo jogo.txt. O programa deve usar iteração para tratar o tamanho variável.

Um tabuleiro é um quadrado com posições pretas e brancas dispostas alternadamente. Para representar as posições de cores diferentes, use o caractere # (cerquilha) para posições pretas e . (ponto) para posições brancas. O canto superior esquerdo do tabuleiro deve ser branco.

Entradas:

    Um número inteiro que descreve as dimensões do tabuleiro (número de linhas e colunas).

Saídas (arquivo jogo.txt):

    Sequências alternadas dos caracteres # e . (sem espaços em branco) em linhas diferentes, criando a aparência de um tabuleiro.

Exemplo de entrada:

5

Exemplo de saída (arquivo jogo.txt):

.#.#.
#.#.#
.#.#.
#.#.#
.#.#.


*/


#include <iostream>
#include <fstream>
using namespace std;

int main () {
	int numero, cont = 0, linha = 1;
	
	cin >> numero;
	
	ofstream arq ("jogo.txt");
	while (linha <= numero) {
		cont = 0;
		if (linha%2 != 0) {
			while (numero - cont != 0) {
				cont++;
				if (cont%2 != 0) {
					arq << ".";
					} else {
						arq << "#";
						}
				}	
			}
		if (linha%2 == 0) {
			while (numero - cont != 0) {
				cont++;
				if (cont%2 != 0) {
					arq << "#";
					} else {
						arq << ".";
						}
				}
			}
		arq << endl;
		linha++;
		}

	return 0;
}