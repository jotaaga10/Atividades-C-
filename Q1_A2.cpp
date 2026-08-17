#include <iostream>
using namespace std;

int main() {
	int num[15];
	
	cout << "Digite 15 numeros inteiros " << endl;
	for (int i = 0; i < 15; i++) {
		cout << "Numero " << i + 1 << ": ";
		cin >> num[i];
	}
	
	cout << "\nNumeros na ordem inversa:" << endl;
	for (int i = 14; i >= 0; i--) {
		cout << num[i] << " ";
	}
	cout << endl;
	
	return 0;
}