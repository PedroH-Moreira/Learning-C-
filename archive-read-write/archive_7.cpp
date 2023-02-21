/*

Você precisa fazer um programa para converter a distância percorrida de embarcações, em relação ao porto de origem, de quilômetros para milhas náuticas. A conversão será aplicada aos dados de várias embarcações.

Seu programa deverá ler três números reais: a distância atual da embarcação em relação ao porto de origem (em quilômetros), a velocidade média da embarcação (em quilômetros por hora), e uma quantidade de tempo (em horas) gasto para percorrer um trajeto.

Com os dados de entrada, o programa deve calcular a distância atual em milhas e a previsão da distância da embarcação em relação à origem ao final do tempo indicado.

Os dados de cada embarcação estão em um arquivo chamado entrada.txt. Seu programa deve ler o arquivo e escrever na tela a distância atual em milhas náuticas e a previsão de distância total percorrida após o tempo indicado, na velocidade indicada. O programa irá terminar quando não for possível mais ler dados do arquivo.

1 milha náutica = 1,852 quilômetros

O valor do tempo se refere a horas. Por exemplo, 2,5 horas são duas horas e meia.

Entradas (conteúdo do arquivo entrada.txt):

    Dados referentes a várias embarcações, cada qual:
        Distância atual (km),
        velocidade (km/h) e
        tempo (horas) (são 3 números reais, numa mesma linha).

Saídas:

    Distância atual em milhas (número real),
    previsão de distância em milhas após continuar o deslocamento pelo tempo indicado, na velocidade indicada (número real).

Exemplo de entrada (conteúdo do arquivo entrada.txt):

15 35 2
8.6 79.6 3.2
81 4.3 5

Exemplo de saída:

8.1 45.9
4.64 142.18
43.74 55.35

*/

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;


int main () {
	float distancia, velocidade, tempo, distanciaAtual, previsao;
	
	ifstream leitura ("entrada.txt");
	
	while (leitura >> distancia >> velocidade >> tempo) {
		distanciaAtual = distancia/1.852;
		previsao = (velocidade*tempo)/1.852 + distanciaAtual;
		cout << setprecision(2) << fixed
		<< distanciaAtual << " " << previsao << endl;
		}
	leitura.close();
	
	return 0;
}
