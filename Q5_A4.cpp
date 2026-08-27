#include <iostream>
using namespace std;

void tabuada(int numero) {
    cout << "\n=== TABUADA DO " << numero << " ===" << endl;

    cout << "\n--- SOMA ---" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << numero << " + " << i << " = " << (numero + i) << endl;
    }

    cout << "\n--- SUBTRACAO ---" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << numero << " - " << i << " = " << (numero - i) << endl;
    }

    cout << "\n--- MULTIPLICACAO ---" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << numero << " * " << i << " = " << (numero * i) << endl;
    }

    cout << "\n--- DIVISAO ---" << endl;
    for (int i = 1; i <= 10; i++) {
       
        cout << numero << " / " << i << " = " << ((float)numero / i) << endl;
    }
}

int main() {
    int num;

    cout << "Digite um numero inteiro: ";
    cin >> num;

    tabuada(num);

    return 0;
}