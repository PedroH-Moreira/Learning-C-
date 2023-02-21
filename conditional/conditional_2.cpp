/*


Faça um programa que receba a idade de uma pessoa e indique se esta pessoa é ou não maior de idade. Caso a pessoa tenha 18 anos ou mais, o programa deverá exibir a mensagem MAIOR DE IDADE. Caso contrário, o programa deverá exibir no dispositivo de saída padrão a mensagem MENOR DE IDADE. Note que todas as mensagens a serem exibidas devem ser grafadas com letras maiúsculas e todas as palavras das mensagens são separadas por um espaço.

Entradas:

    Número inteiro que indica a idade de uma pessoa.

Saídas:

    MAIOR DE IDADE OU MENOR DE IDADE.

Exemplo de entrada:

20

Exemplo de saída:

MAIOR DE IDADE

Exemplo de Entrada:

9

Exemplo de Saída:

MENOR DE IDADE



*/






#include <iostream>
#include <cmath>
using namespace std;

int main () {
	
	int idade;
	
	cin >> idade;
	
	if(idade >= 18)
		cout << "MAIOR DE IDADE";
	else {
			cout << "MENOR DE IDADE";
			}
	
	
	
	
	
	return 0;
}
