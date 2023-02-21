/*


No plano cartesiano, considere um segmento de reta que tem origem no ponto (0,0) e forma um ângulo h (em graus) com a abscissa (eixo horizontal). Faça um programa que leia o valor do ângulo h (número inteiro positivo) e dois valores X e Y (números reais, um em cada linha). Em seguida, faça um dos cálculos abaixo, dependendo de qual quadrante o segmento de reta se encontra.

    Primeiro quadrante: calcule a soma de X e Y.
    Segundo quadrante: calcule o produto de X por Y.
    Terceiro quadrante: calcule o quociente da divisão de X por Y.
    Quarto quadrante: calcule o valor de X elevado a Y.

Observe que o ângulo pode ser maior do que 360 graus, correspondendo a mais de uma volta no círculo trigonométrico. Nesses casos, será necessário reduzir o ângulo à primeira volta (entre 0 e 360 graus) para se descobrir o quadrante. Além disso, considere que o segmento de reta nunca coincidirá com os eixos do plano cartesiano.

Entradas:

    O valor de h (número inteiro positivo).
    O valor de X (número real).
    O valor de Y (número real).

Saídas:

    O resultado do cálculo que depende da posição do segmento de reta no plano cartesiano.

Exemplo de Entrada:

375
3.5
5.5

Exemplo de Saída:

9.0

Exemplo de Entrada:

2090
5
2

Exemplo de Saída:

25.0



*/


#include <iostream>
#include <cmath>
using namespace std;

int main () {
	int h;
	float x, y;
	
	cin >> h >> x >> y;
	
	h = h%360;
	
	if (h > 0 and h <= 90)
		cout << x + y;
	if (h > 90 and h <= 180)
		cout << x*y;
	if (h > 180 and h <= 270)
		cout << x/y;
	if (h > 270 and h < 360)
		cout << pow(x,y);
	
	return 0;
}
