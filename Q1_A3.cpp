#include <iostream>
using namespace std; 

int main() {
    int matriz[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Digite o valor para [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    
    cout << "\nMatriz resultante:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
