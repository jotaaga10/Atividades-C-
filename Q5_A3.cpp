#include <iostream>
using namespace std;

int main() {
	int matriz[3][3];
	
	cout << "Digite os valores para a matriz 3x3:" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "Elemento [" << i << "][" << j << "]: ";
			cin >> matriz[i][j];
		}
	}
	
	cout << "\n--- Soma de cada linha ---" << endl;
	for (int i = 0; i < 3; i++) {
		int somaLinha = 0;
		
		for (int j = 0; j < 3; j++) {
			somaLinha += matriz[i][j];
		}
		
		cout << "Soma da Linha " << i + 1 << ": " << somaLinha << endl;
	}
	
	return 0;
}