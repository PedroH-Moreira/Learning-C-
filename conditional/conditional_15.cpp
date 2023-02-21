/*


Seu jogo preferido envolve a atualização de estruturas que demora vários minutos. O jogo informa quantos minutos faltam para terminar a atualização, mas você gostaria de saber exatamente quando é isso para ajustar um alarme.

Faça um programa que lê o dia, hora e minuto atual, além de uma duração em minutos e escreve o resultado da adição da duração com o horário atual.

Para simplificar, suponha que nunca vai ocorrer mudança de mês no processamento.

Entradas (suponha cada valor numa linha):

    O dia do horário atual (inteiro),
    a hora do horário atual (inteiro entre 0 e 23),
    o minuto do horário atual (inteiro entre 0 e 59),
    a duração em minutos que a atualização precisa para terminar (inteiro).

Saídas:

    O dia, hora e minuto em que a atualização termina.

Exemplo de Entrada:

3
20
12 
1911

Exemplo de Saída:

5 4 3


*/



#include <iostream>

using namespace std;

int main () {
	int dia, hora, min, duracao;
	
	cin >> dia >> hora >> min >> duracao;
	
	if (duracao >= 1440) {
		dia += duracao/1440;
		duracao = duracao%1440;
		} else if (duracao >= 60){
			hora += duracao/60;
			if (hora >= 24) {
				dia++;
				hora = hora%24;
				}
			duracao = duracao%60;
			} else {
				min += duracao;
				if (min >= 60) {
					min = min%60;
					hora++;
					} 
				if (hora >= 24) {
					dia++;
					hora = hora%24;
					}
				duracao = 0;
				}
				
	if (duracao != 0) {
		if (duracao >= 60) {
			hora += duracao/60;
			duracao = duracao%60;
			if (hora >= 24) {
				dia++;
				hora = hora%24;
				}
			} else {
				min += duracao;
				if (min >= 60) {
					min = min%60;
					hora++;
					if (hora >= 24) {
						dia++;
						hora = hora%24;
						}
					}
				duracao = 0;
				}
		}
		
	if (duracao != 0) {
		min += duracao;
		if (min >= 60) {
			hora++;
			min = min%60;
			}
		if (hora >= 24) {
			dia++;
			hora = hora%24;
			}
		}
	
	cout << dia << " " << hora << " " << min;


	return 0;
}
