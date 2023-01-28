#include <iostream>

using namespace std;

int main () {
	int N, cont, i, cont1 = 0;
	cin >> N;
	int n_matriculas[N], alunos = 0;
	
	for (cont = 0; cont < N; cont++) {
		//laço para inserir os números
		cin >> n_matriculas[cont];
		for (i = 0; i <= cont; i++) {
			//laço para contar os alunos
			if (n_matriculas[cont] == n_matriculas[i]) {
				cont1++;
				} 
			}
		if (cont1 == 1) {
			alunos++;
			}
		cont1 = 0;
		}
	
	cout << alunos;
	
	return 0;
	}
