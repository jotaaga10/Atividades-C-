#include <iostream>
#include <queue>
#include <string>
using namespace std;

struct Pessoa {
    string nome;
    int prioridade;
    bool operator<(const Pessoa& outra) const {
        return prioridade < outra.prioridade;
    }
};

int main() {
    priority_queue<Pessoa> fila;
    int op, tipo;

    do {
        cout << "\n1 - Inserir\n2 - Remover\n3 - Imprimir\n0 - Sair\n";
        cin >> op;

        if (op == 1) {
            Pessoa p;
            cout << "Nome: ";
            cin >> p.nome;

            cout << "Tipo (1-Idoso, 2-PCD, 3-Gestante, "
                 << "4-Autista, 5-Outros): ";
            cin >> tipo;

            if (tipo == 1) p.prioridade = 4;
            else if (tipo == 2 || tipo == 3) p.prioridade = 3;
            else if (tipo == 4) p.prioridade = 2;
            else if (tipo == 5) p.prioridade = 1;
            else {
                cout << "Tipo invalido!\n";
                continue;
            }

            fila.push(p);
        }
        else if (op == 2) {
            if (fila.empty())
                cout << "Fila vazia!\n";
            else {
                cout << "Atendendo: " << fila.top().nome << endl;
                fila.pop();
            }
        }
        else if (op == 3) {
            auto copia = fila;

            while (!copia.empty()) {
                cout << copia.top().nome << " - Prioridade "
                     << copia.top().prioridade << endl;
                copia.pop();
            }
        }

    } while (op != 0);

    return 0;
}
