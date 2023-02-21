/*
Dois maquinistas estão andando em uma mesma linha de trem em sentido a uma colisão. Faça um programa que dada a velocidade dos trens, calcule o tempo restante para a colisão. Se o tempo para a colisão for menor ou igual a 10 segundos, os trens não conseguem parar e o software deve imprimir a palavra "COLISAO". Caso contrário, o tempo deve ser impresso. Lembrando que a fórmula da distância percorrida é d = v × t e que quando objetos estão dirigindo-se em rota de colisão frontal, deve-se somar as velocidades.

Entradas:

    Velocidade do trem 1 (número real)
    Velocidade do trem 2 (número real)
    Distância entre os trens (número real)

Saídas:

    A palavra "COLISAO" caso o tempo para a colisão seja menor ou igual a 10 ou o tempo caso contrário.

Exemplo 1

Exemplo de entrada:

39.07
15.29
951.67

Exemplo de Saída:

17.51


Exemplo 2

Exemplo de entrada:

46.60
42.59
106.35

Exemplo de Saída:

COLISAO


Exemplo 3

Exemplo de entrada:

25.78
13.58
685.80

Exemplo de Saída:

17.42


*/


#include <iostream>
#include <iomanip>

using namespace std;

int main () {
	float vtrem1, vtrem2, d, tempo;
	
	cin >> vtrem1 >> vtrem2 >> d;
	
	tempo = d/(vtrem1+vtrem2);
	
	if (tempo > 10) {
		cout << fixed << setprecision(2) << tempo;
		}

	if (tempo <= 10) {
		cout << "COLISAO";
		}



	return 0;
}
