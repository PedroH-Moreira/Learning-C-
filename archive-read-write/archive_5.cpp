/*

Faça um programa que receba como entrada o nome de um arquivo texto. O programa deve abrir este arquivo texto e ler os valores contidos nele. No arquivo haverá primeiro um inteiro N que indica quantos valores existem no arquivo. Em seguida haverão N valores reais (float). O programa deve calcular o maior e o menor valores dos arquivo e os escrever na saída padrão (cout).

Entradas:

    Nome do arquivo de texto que será lido (não serão usados caracteres brancos no nome),
    Arquivo texto contendo:
        O número (N) de valores no arquivo.
        N valores reais a processar.

Saída:

    O maior valor encontrado no arquivo,
    O menor valor encontrado no arquivo.

Exemplos de Entradas e Saídas

Entradas:

arquivo_de_texto.txt

Conteúdo do Arquivo de Entrada (arquivo_de_texto.txt):

5
10
4.5
2.3
3.2
10

Saídas:

10
2.3

*/

#include <iostream>
#include <fstream>
using namespace std;



int main () {
	int cont;
	float numero, maior, menor;
	string arquivo;
	
	cin >> arquivo;
	ifstream leitura (arquivo);
	leitura >> cont;
	leitura >> numero;
	maior = numero;
	menor = numero;
	while (cont > 0) {
		leitura >> numero;
		if (numero >= maior) {
			maior = numero;
			}
		if (numero <= menor) {
			menor = numero;
			}
		cont--;
		}
	leitura.close();
	
	cout << maior << endl << menor;
	
	return 0;
}