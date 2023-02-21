/*


Escreva um programa que tem uma função que calcula o maior elemento dentre cinco inteiros. Fazer um projeto dos parâmetros necessários para esta função é parte da avaliação.

O programa deverá ter também um módulo principal que é responsável por toda a entrada e saída de dados do programa (operações de leitura e escrita). Ele lê os elementos a serem processados e escreve todos os elementos novamente, seguidos do maior deles.

Entradas:

    Cinco números inteiros.

Saídas:

    Os cinco números lidos.
    O maior dos cinco elementos.

Exemplo de entradas:

12 3 50 20 2

Exemplo de saídas:

12 3 50 20 2
50

*/

#include <iostream>
using namespace std;

int funcao(int vet[5])
{
    int maior = vet[0];
    for (int i = 0; i < 5; i++)
    {
        if (vet[i] > maior)
        {
            maior = vet[i];
        }
    }
    return maior;
}

int main()
{
    int vet[5];

    for (int i = 0; i < 5; i++) 
    {
        cin >> vet[i];
    }
    
    for (int i = 0; i < 5; i++)
    {
        cout << vet[i] << " ";
    }

    cout << endl;
    cout << funcao(vet);
    return 0;
}