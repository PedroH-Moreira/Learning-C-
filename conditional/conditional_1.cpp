/*
Faça um programa que computa os resultados de uma divisão inteira. Dados um dividendo e um divisor, o programa deve informar o quociente e o resto.

Caso não seja possível fazer a divisão, o programa deve escrever erro (letras minúsculas).

Entradas:

    Um número inteiro que representa o dividendo (numerador).
    Um número inteiro que representa o divisor (denominador).

Saídas:

    O quociente da divisão.
    O resto da divisão.

Exemplo de Entrada:

15
7

Exemplo de Saída:

2
1

Exemplo de Entrada:

5
0

Exemplo de Saída:

erro


--------------------------------------------------------------------------------
--------------------------------------------------------------------------------
*/






#include <iostream>
#include <cmath>
using namespace std;

int main () {
	int a, b, quociente, resto;
	
	cin >> a >> b;
	
	
	if (b == 0){
		cout << "erro";
	}
	else {
		quociente = a/b;
		resto = a%b;
		
		cout << quociente << endl;
		cout << resto;
	}
	return 0;
}
