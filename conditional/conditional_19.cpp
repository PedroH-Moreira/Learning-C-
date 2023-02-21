/*


As notas musicais são: Dó, Ré, Mi, Fá, Sol, Lá e Si. Em notação musical, estas notas são respectivamente chamadas de C, D, E, F, G, A e B. Isto é, C=Dó, D=Ré, E=Mi, F=Fá, G=Sol, A=Lá e B=Si.

Faça um programa que recebe a letra que indica a nota e escreve o nome correspondente em português, sem acentos.

Entradas:

    Letra que indica a nota (maiúscula).

Saídas:

    Nome da nota em português (sem acentos, inicial maiúscula).

Exemplo de Entrada:

C

Exemplo de Saída:

Do



*/



#include <iostream>
#include <iomanip>

using namespace std;

int main () {
	string nota;
	
	cin >> nota;
	
	if (nota == "C") {
		cout << "Do";
		}
	if (nota == "D"){
		cout << "Re";
		}
	if (nota == "E"){
		cout << "Mi";
		}
	if (nota == "F"){
		cout << "Fa";
		}
	if (nota == "G"){
		cout << "Sol";
		}
	if (nota == "A"){
		cout << "La";
		}
	if (nota == "B"){
		cout << "Si";
		}

	return 0;
}
