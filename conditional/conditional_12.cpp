/*



Faça um programa para auxiliar nas atividades realizadas por uma alfândega. Para realizar estas atividades seu programa deverá receber como entrada três tipos de informação, a saber: (1) código de um produto comprado. Assuma que a digitação do código do produto será sempre válida, o que neste programa significa um número inteiro entre 1 e 10 ; (2) peso do produto em quilogramas; e (3) código do país de origem do produto. Assuma que a digitação do código será sempre válida, o que neste programa significa um número inteiro entre 1 e 3. Cada dado de entrada será fornecido em uma linha diferente. Seu programa deverá calcular e exibir no dispositivo de saída padrão as seguintes informações (nesta ordem):

    O peso do produto convertido em gramas.
    O preço bruto do produto comprado, definido de acordo com o seu peso em gramas e o código do produto.
    O valor do imposto, sabendo-se que ele é cobrado sobre o preço bruto do produto comprado e depende do país de origem.
    O valor total do produto, dado pelo preço bruto do produto mais o imposto.

Para realizar estes cálculos, considere as tributações elucidadas a seguir:
Código do país de origem 	Imposto
   1 	                        0%
   2                       	15%
   3                        	25%
Código do produto 	Preço por grama
   1 a 4 	               10
   5 a 7 	               25
   8 a 10               	35

Entradas:

    Número inteiro que denota o código do produto. Número entre 1 e 10.
    Número em ponto flutuante (float) que denota o peso do produto em quilogramas.
    Número inteiro que denota o país de origem do produto. Número entre 1 e 3.

Saídas:

    Número em ponto flutuante (float) que denota o peso do produto em gramas.
    Número em ponto flutuante (float) que denota o preço bruto do produto.
    Número em ponto flutuante (float) que denota o imposto sobre o produto.
    Número em ponto flutuante (float) que denota o preço total do produto.

Exemplo de entrada:

7
0.5
3

Exemplo de saída:

500.0
12500.0
3125.0
15625.0

Exemplo de Entrada:

3
4.7532
1

Exemplo de Saída:

4753.2
47532.0
0.0
47532.0


*/


#include <iostream>
#include <iomanip>
using namespace std;

int main () {
	
	int codigo_produto, codigo_pais;
	float peso, preco_bruto, imposto, total;
	
	cin >> codigo_produto >> peso >> codigo_pais;
	
	peso = peso*1000;
	
	if (codigo_produto >= 1 and codigo_produto <= 4){
		preco_bruto = peso*10;
	}
	if (codigo_produto >= 5 and codigo_produto <= 7){
		preco_bruto = peso*25;
	}
	if (codigo_produto >= 8 and codigo_produto <= 10){
		preco_bruto = peso*35;
	}
	
	switch (codigo_pais) {
		case 1:
			imposto = 0; 
			break;
		case 2:
			imposto = preco_bruto*0.15;
			break;
		case 3: 
			imposto = preco_bruto*0.25;
			break;
		}
		
	total = preco_bruto + imposto;
	
	cout << fixed << setprecision(1) << peso << endl << preco_bruto 
	<< endl << imposto << endl << total; 
	
	
		
	
	return 0;
}