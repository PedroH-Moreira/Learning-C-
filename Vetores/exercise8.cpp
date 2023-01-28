#include <iostream>

using namespace std;

int main () 
{
	string nome[5];
	float salario[5];
	int tempo[5];
	int i;
	
	for (i = 0; i < 5; i++)
	{
		cin >> nome[i];
	}
	
	for (i = 0; i < 5; i++)
	{
		cin >> salario[i];
	}
	
	for (i = 0; i < 5; i++)
	{
		cin >> tempo[i];
	}
	
	int cont = 0;
	for (i = 0; i < 5; i++) 
	{
		if (tempo[i] < 5 and salario[i] > 400)
		{
			cont++;
		}
	}
	
	if (cont != 0)
	{
		cout << "SEM REAJUSTE:" << endl;
		cont = 0;
	}
	
	for (i = 0; i < 5; i++) 
	{
		if (tempo[i] < 5 and salario[i] > 400)
		{
			cout << nome[i] << endl;
		}
	}
	
	for (i = 0; i < 5; i ++)
	{
		if (tempo[i] >= 5 or salario[i] <= 400)
		{
			cont++;
		}
	}
	
	if (cont != 0)
	{
		cout << "COM REAJUSTE:" << endl; 
	}
	
	for (i = 0; i < 5; i++)
	{
		if (tempo[i] >= 5 and salario[i] <= 400)
		{
			cout << nome[i] << " " << salario[i]*1.35;
			cout << endl;
		} else if (tempo[i] >= 5)
				{
					cout << nome[i] << " " << salario[i]*1.25;
					cout << endl;
				} else if (salario[i] <= 400)
						{
							cout << nome[i] << " " << salario[i]*1.15;
							cout << endl;
						}
	}

	return 0;
}

