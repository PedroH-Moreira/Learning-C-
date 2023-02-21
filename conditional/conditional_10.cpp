/*


Faça um programa que lê duas letras (uma em cada linha) e escreve aquela que for representada pelo maior número no sistema de codificação de caracteres que estiver em uso.

Entradas:

    Dois caracteres (um em cada linha).

Saídas

    Caractere com maior representação numérica.

Exemplo de entrada:

a
p

Exemplo de saída:

p

Exemplo de entrada:

a
P

Exemplo de saída:

a



*/


#include <iostream>

using namespace std;

int main () {
	char x1, y1;
	
	cin >> x1 >> y1;
	
	if(int (x1) > int(y1))
		cout << x1;
	else {
		cout << y1;
		}
	
	return 0;
	}