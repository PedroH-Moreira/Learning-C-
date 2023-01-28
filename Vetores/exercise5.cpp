#include <iostream>
using namespace std;

int main () {
	int n;
	
	cin >> n;
	
	int vetor[n], i;
	
	for (i = 0; i < n; i++) {
		cin >> vetor[i];
		}
		
	int cont = 0, resultado = 0;
	i--;
	while (cont < i) {
		if (vetor[cont] == vetor[i]) {
			resultado++;
			}
		i--;
		cont++;
		}
	
	if (n/2 == resultado) {
		cout << 1;
		} else {
			cout << 0;
			}
	

	return 0;
}
