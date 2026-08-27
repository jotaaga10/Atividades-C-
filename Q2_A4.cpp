#include <iostream>
using namespace std;

int main() {
	
	int num;
	
	cout << "Digite um numero inteiro: ";
	cin >> num;
	
	if(num % 2 ==0) {
		cout << num <<" eh par!";
	} else {
		cout << num << "eh impar!";
	}
	
	return 0;
	
}