/*

Na matemática, um número Harshad é um número natural que é divisível pela soma dos seus dígitos. O número 6804, por exemplo, é um número Harshad pois 6+8+0+4 = 18, e 6804 é divisível por 18.

Escreva um programa que verifica se um número é número Harshad. É preciso criar dois subprogramas:

    Um subprograma que recebe um número natural e retorna a soma de seus dígitos.
    Um subprograma que recebe um número natural e retorna um valor lógico, indicando se ele é um número Harshad.

Para uma boa nota, é preciso um bom planejamento. Não repita código, não repita processamento, escolha nomes significativos, não use parâmetros que não entradas dos subprogramas e não misture interface e processamento (esses dois subprogramas não podem ter operações de leitura ou escrita).

Entradas:

    Um número inteiro e positivo.

Saídas:

    O resto da divisão do número pela soma de seus digitos.
    Um texto (sim/nao), indicando se o número tem a propriedade em questão. Atenção para a ausência de acento em "nao".

Exemplo de Entrada:

81

Exemplo de Saída:

0 sim

Exemplo de Entrada:

143

Exemplo de Saída:

7 nao


*/

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int soma(int numero) {
	int soma = 0;
	while (numero >= 0) {
		soma += numero%10;
		numero = numero/10;
		if (numero == 0) {
			numero--;
			}
		}
	return soma;
}

bool Harshad(int numero) {
	if (numero%(soma(numero)) == 0) {
		return 1;
		} else return 0;
}

int main() {
	int numero, resto;
	bool conferir;
	cin >> numero;

	resto = numero%(soma(numero));
	conferir = Harshad(numero);
	
	if (conferir == 1) {
		cout << resto << " sim";
		} else cout << resto << " nao";
	
	return 0;
	}