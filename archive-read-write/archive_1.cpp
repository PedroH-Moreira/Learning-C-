/*

Faça um programa que soma todos os números de um arquivo texto.

O programa deverá ler o nome do arquivo da entrada padrão. Depois deverá ler vários números reais do arquivo indicado e escrever o resultado do somatório na saída padrão. Não se sabe quantos números existem no arquivo, é necessário "ler até acabar" para só então se determinar a quantidade de números.

Entradas:

    Entrada padrão:
        Nome do arquivo a ser lido (texto, sem espaços).
    Arquivo texto:
        Vários números reais separados por espaços.

Saídas:

    Soma dos números presentes no arquivo.

Exemplo de Entrada (entrada padrão):

numeros.txt

Exemplo de Entrada (arquivo numeros.txt):

2.1 5.2 5.9 8

Exemplo de Saída:

21.2

*/


#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main () {
	string nome; 
	float num, soma;
	
	cin >> nome;
	
	ifstream arquivo (nome);
	
	if (arquivo) {
		
		while (arquivo >> num) {
			soma += num;
			}
	}
	else {
		cout << "Não encontrado";
	}
	
	cout << soma;
	
	return 0;
}
