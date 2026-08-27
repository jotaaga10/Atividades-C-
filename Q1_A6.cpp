#include <iostream>
using namespace std;

int main() {
    int vetor[10];
    int valorBusca;
    bool encontrado = false;

    cout << "Digite 10 numeros inteiros:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Posicao [" << i << "]: ";
        cin >> vetor[i];
    }

    cout << "\nDigite o valor para pesquisar: ";
    cin >> valorBusca;

    for (int i = 0; i < 10; i++) {
        if (vetor[i] == valorBusca) {
            cout << "\nValor encontrado na posicao (indice): " << i << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "\nO valor " << valorBusca << " nao foi encontrado no vetor." << endl;
    }

    return 0;
}
