#include <iostream>

using namespace std;

int main () {
	int vetor[9], i;
	
	for (i = 0; i < 9; i++) {
		cin >> vetor[i];
		}
	
	int cont = 0;
	for (i = 0; i < 9; i++) {
		int j;
		for (j = 1; j < vetor[i]; j++) {
			if (vetor[i]%j == 0) {
				cont++;
				}
			}
		if (cont == 1) {
			cout << vetor[i] << " " << i << endl;
			}
		cont = 0;
		}
	
	
	return 0;
	}


