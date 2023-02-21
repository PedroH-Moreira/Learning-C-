/*


Crie um programa que receba como entrada uma sequência de caracteres "a" e "b". A sequência deve ter o tamanho de 10 caracteres. Seu programa deverá retornar 1 se o número de caracteres "a" for menor que o total de caracteres "b", ou retornar 0 caso não ocorra a condição.

Entrada:

a b b b a a b b b a

Saída:

1


*/

#include <iostream>
#include <iomanip>

using namespace std;

int main () {
	string caracter;
	int contA = 0, contB = 0, cont = 0;
	
	while (cont < 10) {
		cin >> caracter;
		if (caracter == "a") {
			contA++;
			}
		if (caracter == "b") {
			contB++;
			}
		cont++;
		}
	
	if (contA < contB) {
		cout << 1;
		}else cout << 0;

	return 0;
}
