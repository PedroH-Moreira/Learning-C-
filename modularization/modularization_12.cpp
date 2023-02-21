/*

Escreva um subprograma que receba um número arábico inteiro e retorne o seu correspondente em número romano. A função deve ser capaz de gerar o número romano para qualquer número natural no intervalo [1,50]. Caso seja digitado um valor fora do intervalo válido, uma mensagem "NUMERO INVALIDO" deve ser mostrada e o programa deve esperar por uma nova entrada. A execução deve ser encerrada se um valor negativo for digitado. As operações de leitura e escrita de dados devem ser realizadas na função principal.

Entradas:

    Número arábico a ser convertido para número romano.

Saídas:

    Número romano correspondente ao valor inserido.

Exemplo de Entrada:

13
9
16
72
34
-8

Exemplo de Saída:

XIII
IX
XVI
NUMERO INVALIDO
XXXIV


*/

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

string numeroRomano (int numero) {
	string conversao;
	int aux;
	aux = numero;
	aux = aux/10;
	switch (aux) {
		case 0: 
			break;
		case 1:
			conversao = "X";
			break;
		case 2: 
			conversao = "XX";
			break;
		case 3:
			conversao = "XXX";
			break;
		case 4: 
			conversao = "XL";
			break;
		case 5: 
			conversao = "L";
			break;
		}
	aux = numero%10;
	switch (aux) {
		case 0: 
			conversao = conversao;
		case 1: 
			conversao += "I";
			break;
		case 2: 
			conversao += "II";
			break;
		case 3: 
			conversao += "III";
			break;
		case 4: 
			conversao += "IV";
			break;
		case 5:
			conversao += "V";
			break;
		case 6:
			conversao += "VI";
			break;
		case 7:
			conversao += "VII";
			break;
		case 8: 
			conversao += "VIII";
			break;
		case 9:
			conversao += "IX";
			break;
		}
	return conversao;
	}
	
int main () {
	int numero = 1;
	
	while (numero >= 1) {
		cin >> numero;
		if(numero > 50) {
			cout << "NUMERO INVALIDO" << endl;
			}
		if (numero >= 1 and numero <= 50) {
			cout << numeroRomano(numero) << endl;
			}
		}
	
	return 0;
	}
