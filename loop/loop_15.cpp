/*


O Torneio Tribruxo é um campeonato entre escolas de magia, no qual é selecionado um representante (chamado campeão), através do Cálice de Fogo, para cada uma de três escolas participantes. Os campeões realizam, ao longo do ano, três tarefas diferentes e o vencedor recebe um grande prêmio. Faça um programa para auxiliar a equipe de organização do evento a determinar qual é o campeão mais popular entre os bruxos em um dado ano.

Seu programa deve inicialmente ler o nome de um arquivo de entrada de dados. O arquivo deverá conter os nomes dos três representantes do torneio [nomes sem espaço], sendo um por linha. Em seguida, deve ter um número inteiro indicando a quantidade de votos computados em uma pesquisa de popularidade realizada entre a comunidade bruxa. Esta pesquisa visa antecipar o nome do representante que será o provável vencedor do torneio. Por fim, o arquivo deverá ter a sequência de votos da pesquisa de popularidade.

Considere que os votos são representados pelos próprios nomes dos representantes. Seu programa deverá exibir no dispositivo de saída padrão a quantidade de votos do representante que obteve a melhor colocação na pesquisa de popularidade (maior número de votos). Assuma que nunca haverá empates ao calcular o maior número de votos. Assuma também que cada dado de entrada será estará em uma linha diferente do arquivo.

Entrada:

    Nome do arquivo

Conteúdo do arquivo de entrada:

    Os nomes dos três representantes de cada escola (um em cada linha).
    Um número inteiro indicando a quantidade total de votos da pesquisa de popularidade.
    Sequência de votos da pesquisa. Assuma um voto (nome do representante) em cada linha.

Saídas:

    Número inteiro indicando a quantidade de votos que o representante mais popular recebeu.

Exemplo de entrada:

arq1.txt

Exemplo de conteúdo de arq1.txt:

Gerard
Margrave
Josephine
7
Gerard
Margrave
Josephine
Josephine
Margrave
Josephine
Josephine

Exemplo de Saída:

4


*/


#include <iostream> 
#include <fstream>
#include <cmath>
using namespace std;

int main () {
	string arquivo;
	string nome1, nome2, nome3, nome;
	int cont1 = 0, cont2 = 0, cont3 = 0, total;
	cin >> arquivo;
	
	ifstream leitura(arquivo);
	if (leitura) {
		leitura >> nome1 >> nome2 >> nome3 >> total;
		while (total - (cont1 + cont2 + cont3) > 0) {
			leitura >> nome;
			if (nome == nome1) {
				cont1++;
				}
			if (nome == nome2) {
				cont2++;
				}
			if (nome == nome3) {
				cont3++;
				}
			}
		}
	if (cont1 > cont2) {
		if (cont1 > cont3) {
			total = cont1;
			} else {
				total = cont3;
				}
		} else {
			if (cont2 > cont3) {
				total = cont2;
				} else {
					total = cont3;
					}
			}
	cout << total;
	
	return 0;
}
