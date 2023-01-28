#include <iostream>

using namespace std;

int main () {
	int tam;
	int contM = 0, contm = 10000;
	cin >> tam;
	tam--;
	int vetor[tam], n;

	for (n = 0; n <= tam; n++) {
		cin >> vetor[n];
		}
	int mais_vendido, menos_vendido;
	int numero, valor, aux = 0;
	for (numero = 0; numero < n; numero++) {
		valor = vetor [numero];
		int cont = 0;
		while (cont < n ) {
			if (vetor[cont] == valor) {
				contM++;
				}
			if (contM > aux) {
				aux = contM;
				mais_vendido = vetor[numero];
				}
			cont++;
			}
		if (contM < aux and contM < contm) {
			contm = contM;
			menos_vendido = vetor [numero];
			}
		contM = 0;
		}
	
	cout << mais_vendido << endl << aux << endl;
	cout << menos_vendido << endl << contm;
	
	
	return 0;
	}
