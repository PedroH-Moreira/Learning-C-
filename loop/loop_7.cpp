/*


Escreva um programa, que lê um conjunto de fichas, cada uma contendo a altura e o gênero de uma pessoa. O programa deve calcular e escrever a maior altura da turma, a menor altura da turma, a média de altura das mulheres, a média de altura dos homens e a média de altura da turma toda.

Entradas:

    a quantidade de fichas (número inteiro positivo)
    para cada ficha:
        altura (número real positivo)
        gênero (letra m ou f)

Saídas:

    maior altura da turma
    menor altura da turma
    altura média entre as mulheres (se não houver mulheres, escrever "erro")
    altura média entre os homens (se não houver homens, escrever "erro")
    altura média da turma

Exemplo de Entrada:

10
1.7 m
1.67 f
1.91 f
1.72 m
1.5 m
1.76 f
2.1 f
1.8 m
1.69 f
1.67 m

Exemplo de Saída:

2.1
1.5
1.826
1.678
1.752

Exemplo de Entrada:

1
1.81 m

Exemplo de Saída:

1.81
1.81
erro
1.81
1.81


*/


#include <iostream>
#include <fstream>

using namespace std;

int main (){
	int contFichas, cont = 0, contF = 0, contM = 0;
	float maior = 1, menor = 3, media = 0, mediaF = 0, mediaM = 0;
	float altura;
	string genero;
	
	cin >> contFichas;
	
	while (cont < contFichas) {
		cin >> altura;
		cin >> genero;
		
		if (genero == "m") {
			contM++;
			mediaM += altura;
			//dividir por contM depois
			}else if (genero == "f") {
				contF++;
				mediaF += altura;
				//dividir por contF depois
				}
		if (altura >= maior) {
			maior = altura;
			}
		if (altura <= menor) {
			menor = altura;
			}
			
		media += altura;
		//dividir por contFichas depois
		cont++;
		}
		
	cout << maior << endl << menor << endl;
	
	if (contF == 0) {
		cout << "erro" << endl;;
		}else {
			cout << mediaF/contF << endl;
			}
	if (contM == 0) {
		cout << "erro" << endl;
		}else {
			cout << mediaM/contM << endl;
			}
	cout << media/contFichas;
	

	return 0;
}
