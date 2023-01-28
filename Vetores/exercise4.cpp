#include <iostream>
using namespace std;

int main () {
	int n1, n2, i;
	
	cin >> n1 >> n2;

	float vetor1[n1], vetor2[n2];
	
	for (i = 0; i < n1; i++) {
		cin >> vetor1[i];
		}

	for (i = 0; i < n2; i++) {
		cin >> vetor2[i];
		}
		
	int cont, verif = 0;
	
	for (i = 0; i < n1; i++) {
		for (cont = 0; cont < n2; cont++) {
			if (vetor1[i] == vetor2[cont]) {
				cout << vetor1[i] << " ";
				verif++;
				}
			}
		}
		
	if (verif == 0) {
		cout << -1;
		} 
	
	return 0;
}
