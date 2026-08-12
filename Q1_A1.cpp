#include <iostream>
using namespace std;

int main (){
	
	int ano_nasc;
	int ano_atual;
	int idade;
	
	cout << "Digite o ano que voce nasceu: ";
	cin >> ano_nasc;
		
	cout << "Agora, digite o ano atual: ";
	cin >> ano_atual;
	
	idade = ano_atual - ano_nasc;
	
	cout << "Sua idade eh " << idade << " anos." << endl;
	
	if (idade >= 18) {
		cout << "Voce eh maior de idade" << endl;
	}
	else {
		cout << "Voce eh menor de idade" << endl;
	}
	return 0;
}