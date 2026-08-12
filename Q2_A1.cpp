#include <iostream>
using namespace std;

int main (){
	float nota1;
	float nota2;
	float nota3;
	float media;
	
	cout << "Informe sua primeira nota: " << endl;
	cin >> nota1;
	
	cout << "Informe sua segunda nota: " << endl;
	cin >> nota2;
	
	cout << "Informe sua terceira nota: " << endl;
	cin >> nota3;
	
	media = (nota1 + nota2 + nota3) /3;
	
	cout <<"Sua media eh " << media << "." << endl;
	
	if (media >= 7){
		cout << "Voce foi aprovado!" << endl;
	}
	else if (media >= 5 && media < 7){
		cout << "Voce esta em recupecao" << endl;
	}
	else{
		cout << "Voce foi reprovado!" << endl;
	}
}
