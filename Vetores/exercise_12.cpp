#include <iostream>

using namespace std;

int main () 
{
  int n;
  cin >> n;
  int vetor[n];
  int i, j, k;

  for(i = 0; i < n; i++) 
  {
    cin >> vetor[i];
  }

  int vetor1[n];

  for (i = 0; i < n; i++) 
  {
    cin >> vetor1[i];
  }
  
  int posicao;
  
  cin >> posicao;
   

  for (i = 0; i < n; i++) 
  {
    for (j = 0; j < n; j++) 
    {
		if (j == posicao) 
		{
			for (k = i; k >= 0; k--)
			{
				cout << vetor[k] << " ";
			}
		}
		cout << vetor1[j] << " ";
	}
	cout << endl;
  }

  return 0;
}
