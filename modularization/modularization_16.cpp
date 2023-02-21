/*


Durante a gravidez, é inevitável que muitos casais possuem muitas dúvidas e inclusive curiosidades a respeito do bebê. Em uma clínica médica, a pergunta sobre qual a probabilidade do bebê nascer com olhos claros é bastante recorrente, porém nem sempre há alguém disponível no momento para responder. Para ajudar a clínica a esclarecer esta dúvida de maneira mais eficiente para seus clientes, faça um subprograma que calcule a probabilidade do filho nascer com olhos verdes ou azuis, com base somente na cor dos olhos dos pais, desconsiderando os avós.

Para lhe auxiliar, utilize como base a tabela abaixo. Considere como entradas válidas as cores “Marrom”, “Azul” e “Verde” para os pais, mas somente as cores “Azul” e “Verde” para o filho. Caso uma das cores seja inválida, imprima a palavra “ERRO”, tudo em maiúsculo. O subprograma deverá ter como entrada as cores do pai, da mãe e a cor desejada para o filho na mesma linha. Deverá ter como saída uma String, indicando a porcentagem de chances do filho nascer com aquela cor dos olhos.

Pai 	   Mãe 	   Filho Verde 	Filho Azul
Marrom	Marrom	8.33% 	      2.78%
Marrom	Verde	   27.78%	      5.56%
Marrom	Azul	   16.67%	      16.67%
Verde	   Marrom   27.78%	      5.56%
Verde	   Verde	   88.64%	      10.86%
Verde	   Azul	   66.42%	      33.08%
Azul	   Marrom	16.67%	      16.67%
Azul	   Verde	   66.42%	      33.08%
Azul	   Azul	   0.50%	         99%

Entradas:

    Strings correspondentes às cores dos olhos do pai, da mãe e cor desejada do filho, respectivamente na mesma linha. A entrada de cada String deve possuir inicial maiúscula e o restante minúsculo.

Saída:

    String correspondente a probabilidade do filho nascer com a cor de olhos escolhida.

Exemplo de Entrada:

Marrom Marrom Verde

Exemplo de Saída:

8.33%

*/

#include <iostream>

using namespace std;

#include <iostream>

using namespace std;

void probabilidade(string pai, string mae, string filho)
{
    if (filho == "Verde") 
    {
        if (pai == mae) 
        {
            if (pai == "Azul")
            {
                cout << "0.50%";
            }
            if (pai == "Marrom")
            {
                cout << "8.33%";
            }
            if (pai == "Verde")
            {
                cout << "88.64%";
            }
        }
        
        if (pai != mae) 
        {
            if ((pai == "Marrom" and mae == "Azul") or (pai == "Azul" and mae == "Marrom"))
            {
                cout << "16.67%";
            }
            if ((pai == "Marrom" and mae == "Verde") or (pai == "Verde" and mae == "Marrom"))
            {
                cout << "27.78%";
            }
            if ((pai == "Azul" and mae == "Verde") or (pai == "Verde" and mae == "Azul"))
            {
                cout << "66.42%";
            }
        }
    }
    
    if (filho == "Azul") 
    {
        if (pai == mae) 
        {
            if (pai == "Azul")
            {
                cout << "99%";
            }
            if (pai == "Marrom")
            {
                cout << "2.78%";
            }
            if (pai == "Verde")
            {
                cout << "10.86%";
            }
        }
        
        if (pai != mae) 
        {
            if ((pai == "Marrom" and mae == "Azul") or (pai == "Azul" and mae == "Marrom"))
            {
                cout << "16.67%";
            }
            if ((pai == "Marrom" and mae == "Verde") or (pai == "Verde" and mae == "Marrom"))
            {
                cout << "5.56%";
            }
            if ((pai == "Azul" and mae == "Verde") or (pai == "Verde" and mae == "Azul"))
            {
                cout << "33.08%";
            }
        }
    }
}

int main () 
{
    string p, m, f;
    
    cin >> p >> m >> f;
    if ((p != "Marrom" and  p != "Azul" and p != "Verde") or (m != "Marrom" and  m != "Azul" and  m != "Verde")
    or ( f != "Azul" and f != "Verde"))
    {
		cout << "ERRO";
	} else 
		{
			probabilidade(p,m,f);
		}
   
    
    return 0;
}
