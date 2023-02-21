/*

Escreva um programa que abra um arquivo texto cujo nome será informado pelo usuário e conte o número de caracteres presentes nele. Imprima o número de caracteres na tela sem incluir espaços e fim de linha.

Entradas:

    nome do arquivo

Saídas:

    um valor inteiro que representa o total de caracteres do arquivo sem incluir espaços e fim de linha

Exemplo de Entrada:

entrada.txt

Exemplo de conteúdo do arquivo entrada.txt:

Eu sou forte
Nao vacilo

Exemplo de Saída:

19


*/



#include <iostream> 
#include <fstream>
#include <cmath>
using namespace std;

int main () {
	string nomeDoArquivo;
	char caracter;
	int contador = 0;
	
	cin >> nomeDoArquivo;
	
	ifstream leitura (nomeDoArquivo);
	
	while (leitura >> caracter) {
			contador++;
		}
	leitura.close();
	cout << contador;
	return 0;
}