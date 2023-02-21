/*

Acredita-se que a partir de qualquer número positivo é possível criar uma sequência de números que termina em 1 da seguinte forma:

Se o número for par, o próximo número da sequência será sua metade. Se for impar, o próximo será três vezes o número mais um.

Faça um programa que leia um número positivo, escreva essa sequência de números até o valor 1 e a quantidade de números da sequência (passada por referência para o programa principal). Os valores da sequência devem ser escritos num subprograma. A quantidade de números gerados deve ser escrita no programa principal. O planejamento do subprograma e seus parâmetros é parte importante da avaliação neste problema.

Entradas:

    Um número inteiro positivo.

Saídas:

    Uma sequência de números conforme as regras acima.
    A quantidade de números da sequência.

Exemplo de Entrada:

13

Exemplo de Saída:

13 40 20 10 5 16 8 4 2 1

10

*/

#include <iostream>
#include <iomanip> 

using namespace std;

int repeticao(int numero, int &cont) {
	cout << numero << " ";
	cont++;
	while (numero > 1) {
		if (numero%2 == 0) {
			numero = numero/2;
			cout << numero << " ";
			cont++;
			} else {
				numero = numero*3 + 1;
				cout << numero << " ";
				cont++;
				}
		}
	cout << endl;
	return numero;
}

int main () {
	int numero, cont = 0;
	
	cin >> numero;
	repeticao(numero,cont);
	cout << cont;
			
	return 0;
	}
