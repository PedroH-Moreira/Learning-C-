/*

Os professores de Algoritmos resolveram aplicar uma mesma prova para todas as turmas da disciplina. As provas são no computador e o sistema de avaliação produz uma planilha de notas depois da avaliação.

Infelizmente, o sistema não sabe a turma de cada aluno e portanto não é capaz de produzir planilhas de notas separadas por turmas.

Você deve desenvolver um programa que dada uma lista de alunos de uma turma, e uma planilha de notas de alunos de várias turmas, produz a planilha de notas da turma específica. Dica: utilize a função seekg(0) para posicionar a leitura do arquivo na posição inicial, caso seja necessário.

Entradas

O programa deverá ler a lista de alunos de um arquivo chamado "turma.txt". Esse arquivo contém vários números de matrícula (números inteiros, na forma de texto), sem qualquer ordenação. O programa deverá ler a planilha de notas de um arquivo chamado "notas.txt". O arquivo de notas contém várias linhas de número de matrícula e uma nota (número racional), separados por um espaço, também sem qualquer ordem. Não existe nenhuma indicação nos arquivos sobre a quantidade de informações neles.

Saídas

O programa deverá criar um arquivo texto com as notas de cada aluno da turma. O nome do arquivo deve ser "notas-turma.txt". Cada linha deverá ter o número de matrícula e a nota do aluno, separados por um espaço. A ordem deverá ser a mesma do arquivo da turma. Alguns alunos podem não ter feito a avaliação. Caso não exista a nota do aluno na planilha de notas, o aluno deverá aparecer no arquivo de saída com nota zero.

Exemplo de Entrada

Conteúdo do arquivo turma.txt:

20152001
20152015
20151302
20142082

Conteúdo do arquivo notas.txt:

20152086 50.9
20151302 51.1
20152001 68.1
20151107 36.5
20142082 58.9

Exemplo da saída:

Conteúdo do arquivo notas-turma.txt:

20152001 68.1
20152015 0
20151302 51.1
20142082 58.9

*/

#include <iostream>
#include <fstream>
using namespace std;



int main () {
	int matricula, matricula2 = 0;
	float nota;
	
	ifstream leitura ("turma.txt");
	ofstream imprimir ("notas-turma.txt");
	while (leitura >> matricula) {
		ifstream leitura1 ("notas.txt");
		int matricula1;
		while (leitura1 >> matricula1 >> nota) {
			if (matricula1 == matricula) {
				matricula2 = matricula;
				imprimir << matricula << " " << nota << endl;
				}
			}
		if (matricula2 != matricula) {
			imprimir << matricula << " " << 0 << endl;
			}
		matricula2 = 0;
		leitura1.close();
		}
	leitura.close();
	imprimir.close();

	return 0;
}