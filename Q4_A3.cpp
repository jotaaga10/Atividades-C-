#include <iostream>
using namespace std;

int main() {
	int matriz[3][4];
	int maior;
	int linhaMaior = 0;
	int colunaMaior = 0;
	
	cout << "Digite os valores para a matriz 3x4:" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << "Elemento [" << i << "][" << j << "]: ";
			cin >> matriz[i][j];
			
			if (i == 0 && j == 0) {
				maior = matriz[0][0];
				linhaMaior = 0;
				colunaMaior = 0;	
			}
			
			else if (matriz[i][j] > maior) {
				maior = matriz[i][j];
				linhaMaior = i;
				colunaMaior = j;
			}
		}
	}
	
	cout << "\n---- RESULTADO ----" << endl;
	cout << "Maior valor armazenado: " << maior << endl;
	cout << "Lozalizacao: Linha " << linhaMaior << ", Coluna " << colunaMaior << endl;
	
	return 0;
}
