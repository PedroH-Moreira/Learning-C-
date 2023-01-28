#include <iostream>

using namespace std;

int main () 
{
	int n;
	cin >> n;
	string vetor[n];
	int i, tamanho[n], maior = 0;
	
	for (i = 0; i < n; i++)
	{
		cin >> vetor[i];
		tamanho[i] = vetor[i].size();
		if (tamanho[i] > maior)
		{
			maior = tamanho[i];
		}
	}
	
	for (i = 0; i < n; i++)
	{
		tamanho[i] -= maior;
		if (tamanho[i] < 0)
		{
			for (int j = tamanho[i]; j < 0; j++)
			{
				cout << "*";
			}
			cout << vetor[i];
		} else cout << vetor[i];
		cout << endl;
	}
	
	
	
	
	return 0;
}


