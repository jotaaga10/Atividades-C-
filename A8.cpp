#include <iostream>
using namespace std;

void bubbleSort(int vetor[], int n) {
	for(int ult = n - 1; ult > 0; ult--) {
		for(int i = 0; i < ult; i ++) {
			if(vetor[i] > vetor[i + 1]) {
				int aux = vetor [i];
				vetor[i] = vetor[i + 1];
				vetor [i + 1] = aux;
			}
		}
	}
}
int main() {
    int vetor[] = {5, 2, 9, 1, 3};
    int n = 5;

    bubbleSort(vetor, n);

    cout << "Vetor ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
