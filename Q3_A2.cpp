#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char carac[10];
    int totalConsoantes = 0;

    cout << "Digite 10 caracteres:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << i + 1 << "o caractere: ";
        cin >> carac[i];
    }

    cout << "\nConsoantes digitadas: ";
    for (int i = 0; i < 10; i++) {
      
        char c = tolower(carac[i]);

        if ((c >= 'a' && c <= 'z') && 
            (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')) {
            
            cout << carac[i] << " "; 
            totalConsoantes++;     
        }
    }

    cout << "\nTotal de consoantes lidas: " << totalConsoantes << endl;

    return 0;
}