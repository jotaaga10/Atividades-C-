  #include <iostream>
using namespace std;

int main() {
    const int TAM = 5;
    int vetor1[TAM];
    int vetor2[TAM];

    cout << "Digite " << TAM << " numeros para o primeiro vetor:" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << "Vetor 1 [" << i << "]: ";
        cin >> vetor1[i];
    }

    cout << "\nDigite " << TAM << " numeros para o segundo vetor:" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << "Vetor 2 [" << i << "]: ";
        cin >> vetor2[i];
    }

    cout << "\nValores presentes em ambos os vetores:" << endl;
    for (int i = 0; i < TAM; i++) {
        
        bool jaExibido = false;
        for (int k = 0; k < i; k++) {
            if (vetor1[i] == vetor1[k]) {
                jaExibido = true;
                break;
            }
        }

        if (jaExibido) {
            continue;
        }

        bool encontradoNoVetor2 = false;
        for (int j = 0; j < TAM; j++) {
            if (vetor1[i] == vetor2[j]) {
                encontradoNoVetor2 = true;
                break;
            }
        }

        if (encontradoNoVetor2) {
            cout << vetor1[i] << " ";
        }
    }
    cout << endl;

    return 0;
}