/*

Considere um arquivo de dados do tipo texto chamado "entrada.txt" com o seguinte conteúdo:

3
JOSE
8.5
10.0
ANTONIO
7.5
8.5
SEBASTIAO
5.0
6.0

O arquivo anterior é apenas um exemplo. Nestes arquivos de alunos a primeira linha contém o número de alunos no arquivo. As linhas seguintes contém os seguintes dados:

o nome do aluno, que será sempre uma palavra sem espacos;
o nota da primeira prova, número real;
o nota da segunda prova, número real.

Escreva um programa que imprima em um arquivo chamado "saida.txt", os nomes de todos os alunos que têm a média das duas notas menor que 7.0. Os nomes devem ser impressos na mesma ordem que foram lidos do arquivo "entrada.txt".

Exemplo de Entrada (arquivo entrada.txt):

5
AMELIA
5.0
8.8
JOSE
8.5
10.0
ANTONIO
7.5
8.5
SEBASTIAO
5.0
6.0
MARIA
2.0
10.0

Exemplo de Saída (arquivo saida.txt):

AMELIA
SEBASTIAO
MARIA

*/

#include <iostream>
#include <fstream>

using namespace std;

int main () {
	string nome;
	float nota1, nota2;
	int alunos;
	ifstream leitura ("entrada.txt");
	ofstream arq ("saida.txt");
	
	leitura >> alunos;
	while (leitura >> nome >> nota1 >> nota2) {
		
		if ((nota1+nota2)/2 < 7.0) {
			arq << nome << endl;
		}
	}
	
	arq.close();
	leitura.close();



	return 0;
}




