/*


Crie um programa para definir o quarto adequado para hóspedes do Hotel Transilvânia, sabidamente um dos melhores no que diz respeito à hospedagem de vampiros, zumbis, lobisomens e outros tipos de monstros. Para manter a qualidade, o Hotel adota os seguintes critérios:

    Os quartos do hotel são representados por uma centena, sendo que a centena indica o andar, a dezena indica o corredor e a unidade o quarto em específico naquele corredor e andar.
    Zumbis e múmias são sempre hospedados no primeiro andar
    Lobisomens e duendes são sempre hospedados no segundo andar
    Monstros femininos (hárpias e sucubus) são sempre hospedados no terceiro andar
    Vampiros e fantasmas são sempre hospedados no quarto andar
    Para definir o corredor, avalia-se quantas pessoas ficarão no quarto:
        Qualquer monstro, se viajando sozinho hospeda-se em um quarto no corredor 1.
        Caso seja um casal, o quarto fica no corredor 2.
        Caso esteja com filhos (3 ou mais pessoas), o quarto fica no corredor 3.
    Para definir o quarto no corredor, usa-se o tempo que o monstro deseja ficar hospedado.
        Caso o monstro for ficar um ou dois dias, ele fica em um quarto de final 1.
        Caso fique de três a quatro dias, ele fica em um quarto de final 2.
        Caso fique cinco ou seis dias, ele fica em um quarto de final 3.
        Caso fique uma semana ou mais, ele fica em um quarto de final 4.

Considere, para efeitos práticos, que é início de temporada e os quartos estão todos vazios.

Entradas:

    Tipo de monstro, indicado por uma letra apenas: z (zumbis), m (múmias), l (lobisomens), d (duendes), h (hárpias), s (sucubus), v (vampiros) e f (fantasmas)
    Número de pessoas para o quarto
    Tempo de hospedagem (número de dias)

Saídas:

    Número do quarto (um inteiro), de acordo com as regras estabelecidas

Exemplo de Entrada:

v 4 8

Exemplo de Saída:

434

Exemplo de Entrada:

z 1 3

Exemplo de Saída:

112

*/


#include <iostream>
#include <fstream>

using namespace std;

int main () {
	string monstro;
	int pessoas, tempo, quarto;
	
	cin >> monstro >> pessoas >> tempo;
	
	if (monstro == "z" or monstro == "m") {
		quarto = 100;
	}
	if (monstro == "l" or monstro == "d") {
		quarto = 200;
	}
	if (monstro == "h" or monstro == "s") {
		quarto = 300;
	}
	if (monstro == "v" or monstro == "f") {
		quarto = 400;
	}
	if (pessoas == 1) {
		quarto += 10;
	}
	if (pessoas == 2) {
		quarto += 20;
	}
	if (pessoas >= 3) {
		quarto += 30;
	}
	if (tempo == 1 or tempo == 2) {
		quarto += 1;
	}
	if (tempo == 3 or tempo == 4) {
		quarto += 2;
	}
	if (tempo == 5 or tempo == 6) {
		quarto += 3;
		}
	if (tempo >= 7) {
		quarto += 4;;
		}

	cout << quarto;
	
	return 0;
}
