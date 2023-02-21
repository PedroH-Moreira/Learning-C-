/*


Faça um programa capaz de obter o quociente inteiro da divisão de dois números, sem utilizar a operação de divisão (/) e nem o operador resto (%).

Entradas:

    Dois números inteiros positivos.

Saídas:

    Quociente da divisão inteira.

Exemplo de Entrada:

8
2

Exemplo de Saída:

4


*/



#include <iostream>
using namespace std;

int main () {
	int numero1, numero2, cont = 0;
	cin >> numero1 >> numero2;
	
	if (numero1 >= numero2) {
		while (numero1 > 0) {
			numero1 -= numero2;
			if (numero1 >= 0) {
				cont++;
				}
			}
		} else {
			while (numero2 > 0) {
				numero2 -= numero1;
				if (numero2 >= 0) {
					cont++;
					}
				}
			}
	cout << cont;

	return 0;
}
