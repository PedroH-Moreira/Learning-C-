#include <iostream>

using namespace std;

int main () {
	float vetor[12];
	int i;
	float maior = -100, menor = 100;
	int maior_temp, menor_temp;
		
	for (i = 0; i < 12; i++) {
		cin >> vetor[i];
		if (vetor[i] > maior) {
			maior = vetor[i];
			maior_temp = i;
			}
		if (vetor[i] < menor) {
			menor = vetor[i];
			menor_temp = i;
			}
		}
	
	string meses[12] = {"janeiro", "fevereiro", "marco", "abril", "maio", "junho",
		"julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
		
	cout << meses[maior_temp] << endl << meses[menor_temp];
	
	
	return 0;
	}