/* 
Bandeirantes é a denominação dada aos sertanistas do período colonial, que, a partir do início do século XVI, penetraram nos sertões da América do Sul em busca de riquezas minerais, sobretudo o ouro e a prata.

Em um dado grupo de bandeirantes, um jogo bem simples se mostrou particularmente popular durante suas longas viagens. Tal jogo consistia em falar uma determinada cor se um dado número natural de 6 algarismos fosse um palíndromo, ou dizer uma segunda outra cor caso não fosse. Faça um programa que leia o nome de duas cores e um número natural (nesta ordem), seu programa deverá exibir o nome da primeira cor caso o número natural fornecido seja um palíndromo ou exibir o nome da segunda cor caso ele não seja um palíndromo. Cada dado de entrada será fornecido em uma linha diferente.

Dizemos que um número natural N é palíndromo se

Primeiro algarismo de N é igual ao seu último algarismo
Segundo algarismo de N é igual ao penúltimo algarismo
e assim sucessivamente.

Entradas:

Nome da primeira cor.
Nome da segunda cor.
Número inteiro N.
Saídas:

Nome de uma cor segundo a regra definida no enunciado desta questão.
Exemplo de Entrada:

azul
vermelho
567765
Exemplo de Saída:

azul
Exemplo de Entrada:

azul
vermelho
567675
Exemplo de Saída:

vermelho 
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main () {
	int numero, resto, alg1, alg2, alg3, alg4, alg5, alg6;
	string cor1, cor2;
	cin >> cor1 >> cor2;
	cin >> numero;
	
	alg1 = numero/100000;
	resto = numero%100000;
	
	alg2 = resto/10000;
	resto = resto%10000;
	
	alg3 = resto/1000;
	resto = resto%1000;
	
	alg4 = resto/100;
	resto = resto%100;
	
	alg5 = resto/10;
	resto = resto%10;
	
	alg6 = resto;
	
	if (alg1 == alg6 and alg2 == alg5 and alg3 == alg4) {
		cout << cor1;
		}else {
			cout << cor2;
			}
	
	return 0;
}
