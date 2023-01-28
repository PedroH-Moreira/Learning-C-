#include <iostream>

using namespace std;

int main () 
{
    int i;
    float total[10], comissao[10], relacao[10];
    string nomes[10], nomeMaior;
    float maior = 0, soma = 0;

    for (i = 0; i < 10; i++) 
    {
        cin >> nomes[i] >> total[i] >> comissao[i];
        relacao[i] = total[i]*comissao[i];
        if (relacao[i] >= maior) 
        {
            nomeMaior = nomes[i];
            maior = relacao[i];
        }
        soma += total[i];
    }

    for (i = 0; i < 10; i++)
    {
        cout << nomes[i] << " " << relacao[i] << endl;
    }

    cout << soma << endl << nomeMaior << " " << maior;

  return 0;
}
