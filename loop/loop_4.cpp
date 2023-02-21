/*


Faça um programa que leia da entrada padrão um número inteiro que indicará a quantidade de linhas que um triângulo terá. O programa deverá imprimir na saída padrão um triângulo onde cada coluna será uma letra do alfabeto.

Entradas:

    A quantidade de linhas do triângulo (número inteiro menor que 27).

Saídas:

    O triângulo onde cada coluna é uma letra do alfabeto.

Exemplo de Entrada:

5

Exemplo de Saída:

a 
a b 
a b c 
a b c d 
a b c d e 



*/



#include <iostream>
#include <fstream>

using namespace std;

int main () {
	int n, linha, caractere;
	cin >> n;
	
	linha = 1;
	
	while (linha <= n) {
		caractere = 0;
		while (caractere < linha) {
			cout << char(caractere + 97) << " ";
			caractere++;
			}
		linha++;
		cout << endl;
		}
	
	return 0;
}
