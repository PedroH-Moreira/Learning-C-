/*



Um número triangular é um número natural que pode ser representado na forma de triângulo equilátero (veja a ilustração). Sendo os primeiros números: 1, 3, 6, 10, 15, 21, 28, e assim por diante.

Faça um programa que, dado um número inteiro positivo N, retorne o N-ésimo número triangular. O n-ésimo número triangular pode ser obtido pela soma de n ao (n-1)-ésimo número triangular. Ou seja:

NumTriang(1) = 1

NumTriang(N) = N + NumTriang(N-1)
                                                    o
                                o                  o o
T1 = 1 -> o         T2 = 3 - > o o     T3 = 6  -> o o o

Exemplo de entrada:
4

Exemplo de saída:
10


*/



#include <iostream>
#include <iomanip>

using namespace std;

int main () {
	int n, trianguloN;
	int cont = 1;
	
	cin >> n;
	
	while (cont <= n) {
		trianguloN += cont;
		cont++;
		}
	cout << trianguloN;
	
	return 0;
}
