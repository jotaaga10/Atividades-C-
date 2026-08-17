#include <iostream>
using namespace std;

int main () {
	int num [5];
	
	cout << "Digite 5 numeros inteiros " << endl;
	for  (int i = 0; i < 5; i++) {
		cout << "\nNumero " << i + 1 << ": ";
		cin >> num[i];
	}
	
	int soma = num[0] + num[1] + num[2] + num[3] + num[4];
	int subtracao = num[0] - num[1] - num[2] - num[3] - num[4];
	int multiplicacao = num[0] * num[1] * num[2] * num[3] * num[4];
	
	cout << "\n--- RESULTADOS ---" << endl;
	cout << "A soma desses numeros eh " << soma << endl;
	cout << "A subtracao desses numeros eh " << subtracao << endl;
	cout << "A multiplicacao desses numeros eh " << multiplicacao << endl;

return 0;
	
}