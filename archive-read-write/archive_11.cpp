/*
Um número triangular é um número natural que pode ser representado na forma de triângulo equilátero (veja a ilustração). Sendo os primeiros números: 1, 3, 6, 10, 15, 21, 28, e assim por diante.

Faça um programa que, dado um número inteiro positivo N em um arquivo entrada.txt, retorne o N-ésimo número triangular em saida.txt. O n-ésimo número triangular pode ser obtido pela soma de n ao (n-1)-ésimo número triangular. Ou seja:

NumTriang(1) = 1

NumTriang(N) = N + NumTriang(N-1)

Exemplo de entrada (entrada.txt):
4

Exemplo de saída (saida.txt):
10
*/


#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;


int main () {
	int nTriangulo;
	
	ifstream leitura ("entrada.txt");
	leitura >> nTriangulo;
	leitura.close();
	
	ofstream arq ("saida.txt");
	arq << (nTriangulo*(nTriangulo+1)/2);
	arq.close();
	
	return 0;
}
