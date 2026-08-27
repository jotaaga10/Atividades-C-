#include <iostream>
using namespace std;

int main() {
    int vetor[10];
    int valorBusca;
    int contador = 0;

    cout << "Digite 10 numeros inteiros:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Posicao [" << i << "]: ";
        cin >> vetor[i];
    }

    cout << "\nDigite o valor para pesquisar: ";
    cin >> valorBusca;

    for (int i = 0; i < 10; i++) {
        if (vetor[i] == valorBusca) {
            contador++;
        }
    }
    
    cout << "\nO valor " << valorBusca << " aparece " << contador << " vez(es) no vetor." << endl;

    return 0;
}