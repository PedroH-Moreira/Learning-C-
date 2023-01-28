#include <iostream>

using namespace std;

int main () {
	int vetor[7];
	int i;
	
	for (i = 0; i < 7; i++) {
		cin >> vetor[i];
		}
		
	int cont = 0;
	for (i = 0; i < 7; i++) {
		if (vetor[i]%2 == 0) {
			cout << vetor[i] << " ";
			cont++;
			}
		}
		
	if (cont == 0) {
		cout << 0 << endl;
		} else {
			cout << endl;
			}
	cont = 0;
	
	for (i = 0; i < 7; i++) {
		if (vetor[i]%3 == 0) {
			cout << vetor[i] << " ";
			cont++;
			}
		}
		
	if (cont == 0) {
		cout << 0 << endl;
		} else {
			cout << endl;
			}
	cont = 0;
	
	for (i = 0; i < 7; i++) {
		if (vetor[i]%2 == 0 and vetor[i]%3 == 0) {
			cout << vetor[i] << " ";
			cont++;
			}
		}
	
	if (cont == 0) {
		cout << 0;
		}
	
	
	
	return 0;
	}