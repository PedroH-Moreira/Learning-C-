/*
Uma fábrica de computadores produz e vende vários produtos. Para manter o controle dos produtos, são armazenadas informações de nome, quantidade produzida e quantidade vendida.
Implemente um algoritmo capaz de ler informações de vários produtos. O usuário irá fornecer o número de produtos que serão lidos e em seguida as informações dos produtos, em um arquivo estoque.txt. A partir desses dados, você deve calcular quantos de cada produto ainda há em estoque, quantos produtos tem menos de 50 itens em estoque (BAIXO ESTOQUE) e qual o produto com maior quantidade em estoque.

Entradas (arquivo estoque.txt):

    Quantidade de produtos que serão lidos (inteiro)
    Para cada produto:
    Nome (string)
    Quantidade produzida (inteiro)
    Quantidade vendida (inteiro)

Saídas (saída padrão):


    Para cada produto:
    Nome
    Quantidade em estoque
    uma mensagem (BAIXO ESTOQUE) se o produto tiver menos de 50 itens no estoque

    No final:
    Nome e quantidade do produto com maior estoque

Exemplo de Entrada (arquivo estoque.txt):

5
Mouse 500 410
Teclado 820 780
Fonte 225 129
Webcan 300 217
Camera 1024 1002

Exemplo de Saída:

Mouse 90
Teclado 40 BAIXO ESTOQUE
Fonte 96
Webcan 83
Camera 22 BAIXO ESTOQUE
Fonte 96
*/

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;


int main () {
	int nProdutos, produzido, vendido, cont= 0, maior = 0;
	string nome, nomeMaior;
	
	ifstream leitura ("estoque.txt");
	leitura >> nProdutos;
	while (cont < nProdutos) {
		int estoque;
		leitura >> nome >> produzido >> vendido;
		estoque = produzido - vendido;
		cout << nome << " " << estoque;
		if (estoque > maior) {
			maior = estoque;
			nomeMaior = nome;
			}
		if (estoque < 50) {
			cout << " " << "BAIXO ESTOQUE";
			}
		cout << endl;
		cont++;
		}
		
	cout << nomeMaior << " " << maior;
	leitura.close();
	
	return 0;
}