/*


Escreva um programa que lê vários pares com número de matrícula e a nota de cada aluno de um determinado curso. Determine e imprima as duas maiores notas, juntamente com o número de matrícula do aluno que obteve cada uma delas;

A quantidade de pares matrícula/nota só será conhecida durante a execução. Quando aparecer um matrícula igual a zero, então não haverá mais pares e nem a nota correspondente à essa matricula inválida.

Havendo várias notas empatadas no máximo, qualquer par de alunos com nota máxima é uma resposta válida.

Entradas:

    Vários pares (mínimo dois) de matrícula (inteiro positivo) e nota (número real positivo) numa mesma linha.

A entrada de dados termina com uma matrícula igual a zero.

Saídas:

    matrícula e nota (maior nota)
    matrícula e nota (segunda maior nota)

Exemplo de Entrada:

202101 81.1
202102 73.9
202106 82.8
202032 83.1
0

Exemplo de Saída:

202032 83.1
202106 82.8



*/



#include <iostream>
#include <iomanip>

using namespace std;

int main  () {
	int matricula, primatricula = 0, segmatricula = 0;
	float nota, prinota = 0, segnota = 0;
	
	cin>>matricula;
	while (matricula != 0) {
		cin>>nota;
		if (nota>=prinota) {
			segmatricula = primatricula;
			segnota = prinota;
			
			primatricula = matricula;
			prinota = nota;
		} else if (nota > segmatricula) {
			segnota = nota;
			segmatricula = matricula;
			}
		
		cin >> matricula;
		}
	cout << primatricula << " " << prinota << endl;
	cout << segmatricula << " " << segnota;
 

	return 0;
}
