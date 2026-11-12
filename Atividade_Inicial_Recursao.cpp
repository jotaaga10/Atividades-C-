#include <iostream>
#include <string>

using namespace std;

int soma(int n) {
	if (n == 0) return 0;
	return n + soma(n - 1);
}

bool ehPalindromo(string s) {
	if (s.length() <= 1) return true;
	if (s[0] != s[s.length() - 1]) return false;
	return ehPalindromo(s.substr(1, s.length() - 2));
}

string inverteString(string s) {
	if (s.length() <= 1) return s;
	return inverteString(s.substr(1)) + s[0];
}

int fibonacci(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
	cout << "Soma (5): " << soma(5) << endl;
	cout << "Palindromo ('arara'): " << (ehPalindromo("arara") ? "Sim" : "Nao") << endl;
	cout << "Invertida ('recursividade'): " << inverteString("recursividade") << endl;
	cout << "Fibonacci (6): " << fibonacci(6) << endl;
	return 0;
}
 