#include <iostream>
using namespace std;

int main (){
	
	int numero;
	int pares = 0;
	int impares = 0;
	int soma = 0;
	
	for (int i = 1; i <=10; i++){
		cout << "Digite o " << i << "o numero: ";
		cin >> numero;
		
		soma += numero;
		
		if (numero % 2 == 0){
			pares ++;
		}
		else {
			impares ++;
		}
	}
	
	cout << "\n ----- RESULTADO -----" << endl;
	cout << "Quantidades de pares: " << pares << endl;
	cout << "Quantidade de impares: " << impares << endl;
	cout << "Soma de todos os numeros: " << soma << endl;
	
	return 0;
	
} 