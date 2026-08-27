#include <iostream>
using namespace std;

int main () {

    int matriz[3][3];
    int soma = 0;

    cout << "Digite os numeros para a matriz 3x3:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
            
            soma += matriz[i][j];
        }
    }

    cout << "\nA soma de todos os elementos eh: " << soma << endl;

    return 0;
}