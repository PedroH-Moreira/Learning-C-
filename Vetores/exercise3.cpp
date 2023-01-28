#include <iostream>
using namespace std;

int main () {
	char palavra[100];
	int i;
	int vogais = 0;
	cin >> palavra;
	
	for (i = 0; i < 100; i++) {
		if (palavra[i] == 'a' or palavra[i] == 'e' or palavra[i] == 'i'
		or palavra[i] == 'o' or palavra[i] == 'u') {
			vogais++;
			}
		}
	
	cout << vogais;
	
	return 0;
}
