#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Disciplina {
    string nome;
    int creditos;
    vector<string> conteudos;
};

struct Aluno {
    string nome, cpf;
    int idade, matricula;
    vector<Disciplina> disciplinas;
};

queue<Aluno> fila;

int main() {
    int op;

    do {
        cout << "\n1-Cadastrar aluno"
             << "\n2-Adicionar disciplina"
             << "\n3-Remover disciplina"
             << "\n4-Listar disciplinas"
             << "\n5-Adicionar conteudo"
             << "\n6-Remover conteudo"
             << "\n7-Listar conteudos"
             << "\n8-Listar todos os alunos"
             << "\n9-Remover primeiro aluno"
             << "\n0-Sair\nOpcao: ";
        cin >> op;

        if (op == 1) {
            Aluno a;
            cout << "Nome, CPF, idade e matricula: ";
            cin >> a.nome >> a.cpf >> a.idade >> a.matricula;
            fila.push(a);
        }

        else if (op >= 2 && op <= 7) {
            int mat;
            cout << "Matricula do aluno: ";
            cin >> mat;

            queue<Aluno> aux;

            while (!fila.empty()) {
                Aluno a = fila.front();
                fila.pop();

                if (a.matricula == mat) {
                    if (op == 2) {
                        Disciplina d;
                        cout << "Nome e creditos: ";
                        cin >> d.nome >> d.creditos;
                        a.disciplinas.push_back(d);
                    }

                    else {
                        string nome;
                        cout << "Nome da disciplina: ";
                        cin >> nome;

                        for (auto it = a.disciplinas.begin();
                             it != a.disciplinas.end(); ) {
                            if (it->nome == nome && op == 3)
                                it = a.disciplinas.erase(it);
                            else {
                                if (it->nome == nome) {
                                    if (op == 4)
                                        cout << it->nome << " "
                                             << it->creditos << " creditos\n";

                                    if (op == 5) {
                                        string c;
                                        cout << "Novo conteudo: ";
                                        cin >> c;
                                        it->conteudos.push_back(c);
                                    }

                                    if (op == 6 || op == 7) {
                                        if (op == 6) {
                                            string c;
                                            cout << "Conteudo a remover: ";
                                            cin >> c;
                                            for (auto p = it->conteudos.begin();
                                                 p != it->conteudos.end(); ++p)
                                                if (*p == c) {
                                                    it->conteudos.erase(p);
                                                    break;
                                                }
                                        } else {
                                            for (auto c : it->conteudos)
                                                cout << c << '\n';
                                        }
                                    }
                                }
                                ++it;
                            }
                        }
                    }
                }
                aux.push(a);
            }
            fila = aux;
        }

        else if (op == 8) {
            queue<Aluno> aux = fila;
            while (!aux.empty()) {
                Aluno a = aux.front();
                aux.pop();
                cout << "\n" << a.nome << " - " << a.matricula << '\n';

                for (auto d : a.disciplinas) {
                    cout << d.nome << '\n';
                    for (auto c : d.conteudos)
                        cout << "  " << c << '\n';
                }
            }
        }

        else if (op == 9 && !fila.empty())
            fila.pop();

    } while (op != 0);

    return 0;
}
