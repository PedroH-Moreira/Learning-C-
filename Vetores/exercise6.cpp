#include <iostream>
using namespace std;

int main () {
	int vetor[8], i, valor;
	
	for (i = 0; i < 8; i++) {
		cin >> vetor[i];
		}
	
	for (i = 0; i < 8; i++) {
		if (vetor[i] > 0) {
			valor = vetor[i];
			cout << valor << " ";
			}
		}
		
	cout << endl;
	
	for (i = 0; i < 8; i++) {
		if (vetor[i] < 0) {
			valor = vetor[i];
			cout << valor << " ";
			}
		}
	
	return 0;
}
