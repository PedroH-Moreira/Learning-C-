/*
A tradução automática é o processo automático de tradução de uma mensagem de um idioma original para outro através de um programa de computador. Você foi convidado para fazer um programa que monta um dicionário de palavras em português e sua tradução em inglês. Para isso, você deve ler dois arquivos que contém os dados de entrada. O primeiro arquivo conterá N palavras em portuguës e o segundo arquivo conterá N palavras em inglês. Junte o conteúdo dos dois arquivos e grave em um terceiro arquivo contendo N linhas, em cada linha: palavraEmPortuguês: palavraEmInglês.

Os nomes dos 3 arquivos deverão ser informados pelo usuário.

Entradas:

    Nome do arquivo que contém as palavras em português.
    Nome do arquivo que contém as palavras em inglês.
    Nome do arquivo que será o dicionário.

Saídas:

    Um arquivo com várias linhas, em cada linha uma palavra em português: uma palavra em inglês.

Exemplo de Entrada:

    portugues.txt
    ingles.txt
    dicionario.txt

Exemplo de conteúdo de portugues.txt:

    avião
    coração
    macaco
    pipoca

Exemplo de conteúdo de inglês.txt:

    airplane
    heart
    monkey
    popcorn

Exemplo de conteúdo de dicionario.txt:

    avião: airplane
    coração: heart
    macaco: monkey
    pipoca: popcorn
*/


#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;


int main () {
	string arquivo1, arquivo2, arquivo3, palavra, palavra1;
	
	cin >> arquivo1 >> arquivo2 >> arquivo3;
	ifstream leitura (arquivo1);
	ifstream leitura1 (arquivo2);
	ofstream arq (arquivo3);
	
	while (leitura >> palavra and leitura1 >> palavra1) {
		arq << palavra << ": " << palavra1 << endl;
		}
	leitura.close ();
	leitura1.close();
	arq.close();
	
	return 0;
}
