#include <iostream>
using namespace std;

int main() {
	int num;
	
	cout << "Digite um numero e veja toda a sua tabuada: ";
	cin >> num;
	
	for (int i = 1; i <= 10; i++) {
		cout << num << " x " << i << " = "  << (num * i) << endl;
	}
	
	return 0;
}