#include <iostream>
using namespace std;

int main(){
	int matriz [4][4];
	int pares = 0;
	int impares = 0;
	
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << "Digite o valor para [" << i << "][" << j << "]: ";
			cin >> matriz[i][j];
			
			if (matriz[i][j] % 2 == 0) {
				pares++;
			} else {
				impares++;
			}
		}
	}
	
	cout << "\n---- RESULTADO ----" << endl;
	cout << "Quantidade de numeros pares: " << pares << endl;
	cout << "Quantidade de numeros impares: " << impares << endl;
	
	return 0;
}