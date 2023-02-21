/*


A nota final de um estudante é calculada a partir de três notas atribuídas, respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final. A média das três notas mencionadas obedece aos pesos a seguir:
Nota 	Peso
Trabalho de Laboratório 	2
Avaliação Semestral 	3
Exame Final 	5

Faça um programa que receba as três notas do dispositivo de entrada padrão, calcule e mostre a média ponderada das notas obtidas pelo aluno. Seu programa deverá informar também o conceito obtido pelo aluno na disciplina, segundo a relação a seguir:
Média Ponderada 	Conceito
[8.0,10.0] 	A
[7.0,8.0[ 	B
[6.0,7.0[ 	C
[5.0,6.0[ 	D
[0.0,5.0[ 	E

Entradas:

    Três números em ponto flutuante que denotam as três notas obtidas pelo aluno. As notas são fornecidas de acordo com a seguinte ordem: nota do trabalho de laboratório, nota da avaliação semestral e, por último, nota do exame final. Cada dado de entrada será fornecido em uma linha diferente.

Saídas:

    Número em ponto flutuante que indica a média ponderada das notas passadas como entrada.
    Caractere que indica o conceito obtido pelo aluno na disciplina.

Exemplo de entrada:

7.5
5.0
6.1

Exemplo de saída:

6.05
C

Exemplo de Entrada:

8.0
6.5
8.9

Exemplo de Saída:

8.0
A


*/


#include <iostream>
using namespace std;

int main () {
	float nota1, nota2, nota3, media;
	
	cin >> nota1 >> nota2 >> nota3;
	
	media = (nota1*2 + nota2 *3 + nota3*5)/10;
	
	cout << media << endl;
	if (media>= 8 and media<= 10)
		cout << "A";
	if (media >=7 and media < 8)
		cout << "B";
	if (media >=6 and media <7)
		cout << "C";
	if (media >=5 and media < 6)
		cout << "D";
	if (media >= 0 and media <5)
		cout << "E";
	


	return 0;
}
