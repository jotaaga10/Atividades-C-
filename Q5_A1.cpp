#include <iostream>
using namespace std;

int main() {
	int num;
	int maior;
	
	cout << "Digite o 1o numero: ";
	cin >> num;
	maior = num;
	
	for (int i = 2; i <=8; i++) {
		cout << "Digite o " << i << "o numero: ";
		cin >> num;
		
		if (num > maior) {
			maior = num;
		}
	}
	
	cout << "\nO maior numero digitado foi: " << maior << endl;
	
	if (maior % 2 == 0) {
		cout << "Ele e  PAR." << endl;
	} else {
		cout << "Ele e IMPAR." << endl;
	}
	
	return 0;
	
}