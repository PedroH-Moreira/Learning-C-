/*

Faça um programa que receba um número natural do arquivo "entrada.txt", calcule seu fatorial e salve-o no arquivo "saida.txt".
Lembrando-se que o fatorial de um número (n!) é dado pela seguinte relação: n! = n × (n-1)!. Escrevendo de outra forma, n! = n × (n-1) × (n-2) × ... × 2 × 1.

Entrada (arquivo "entrada.txt"):

    Número natural do qual se deseja calcular o fatorial.

Saída (arquivo "saida.txt"):

    Fatorial do número lido.

Exemplo de entrada:

5

Exemplo de saída:

120

*/

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main () {
	int numero;
	
	ifstream leitura ("entrada.txt");
	leitura >> numero;
	leitura.close();
	
	int numero2, produto, fatorial = 1;
	
	while (numero > 1){
		numero2 = numero;
		numero--;
		produto = numero2*numero;
		
		fatorial *= produto;
		numero--;
		
		if (numero <= 0){
			numero++;
			}
		}
	
	ofstream arq ("saida.txt");
	arq << fatorial;
	arq.close();
	
	return 0;

}