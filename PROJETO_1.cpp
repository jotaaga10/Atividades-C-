#include <iostream>
#include <iomanip>
using namespace std;

const int linhas = 10;
const int colunas = 10;
const int total_assentos = linhas * colunas;
const float preco_ingresso = 15.50;

void inicializarSala(int sala[linhas][colunas]);
void exibirMapa(const int sala[linhas][colunas]);
bool realizarVenda(int sala[linhas][colunas], int assentosVendidos[], int &qtdVendida);
void ordenarAssentos(int assentosVendidos[], int qtdVendida);
void exibirAssentosComprados(const int assentosVendidos[], int qtdVendida);
void exibirRelatorioFinal(int qtdVendida);

int main() {
    int sala[linhas][colunas];
    int assentosVendidos[total_assentos];
    int qtdVendida = 0;
    int opcao = 0;

    inicializarSala(sala);

    cout << "        Sistema de compras de assentos - CINEMA CINELAND       \n";

    do {
        cout << "\n--- MENU PRINCIPAL ---\n";
        cout << "1. Exibir mapa da sala\n";
        cout << "2. Vender ingresso\n";
        cout << "3. Visualizar assentos comprados (Ordem Crescente)\n";
        cout << "4. Finalizar vendas e Exibir Relatorio\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                exibirMapa(sala);
                break;
            case 2:
                if (realizarVenda(sala, assentosVendidos, qtdVendida)) {
                    exibirMapa(sala); 
                }
                break;
            case 3:
                exibirAssentosComprados(assentosVendidos, qtdVendida);
                break;
            case 4:
                exibirRelatorioFinal(qtdVendida);
                cout << "\nSessao encerrada com sucesso!\n";
                break;
            default:
                cout << "\nOpcao invalida! Tente novamente.\n";
        }
    } while (opcao != 4);

    return 0;
}


void inicializarSala(int sala[linhas][colunas]) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            sala[i][j] = 0;
        }
    }
}


void exibirMapa(const int sala[linhas][colunas]) {
    cout << "\n ---- Mapa da sala (CINELAND) ---- \n";

    for (int i = 0; i < linhas; i++) {
        cout << "Fileira " << setw(2) << (i + 1) << " | ";
        for (int j = 0; j < colunas; j++) {
            int numeroAssento = (i * colunas) + (j + 1);

            if (sala[i][j] == 0) {
                cout << setfill('0') << setw(3) << numeroAssento << " ";
            } else {
                cout << "[XX] ";
            }
        }
        cout << setfill(' ');
        cout << "\n";
    }
    cout << "Legenda: Numero = Livre | [XX] = Ocupado\n";
}


bool realizarVenda(int sala[linhas][colunas], int assentosVendidos[], int &qtdVendida) {
    if (qtdVendida >= total_assentos) {
        cout << "\nSala lotada! Nao ha mais assentos disponiveis.\n";
        return false;
    }

    int numeroAssento;
    cout << "\nInforme o numero do assento desejado (1 a " << total_assentos << "): ";
    cin >> numeroAssento;

    if (numeroAssento < 1 || numeroAssento > total_assentos) {
        cout << "Numero de assento invalido!\n";
        return false;
    }

    int linha = (numeroAssento - 1) / colunas;
    int coluna = (numeroAssento - 1) % colunas;

    if (sala[linha][coluna] == 1) {
        cout << "Assento ja ocupado! Escolha outro lugar.\n";
        return false;
    }

    sala[linha][coluna] = 1;
    assentosVendidos[qtdVendida] = numeroAssento;
    qtdVendida++;

    cout << "Venda realizada com sucesso! Assento " << numeroAssento << " reservado.\n";
    return true;
}

void ordenarAssentos(int assentosVendidos[], int qtdVendida) {
    for (int i = 0; i < qtdVendida - 1; i++) {
        for (int j = 0; j < qtdVendida - i - 1; j++) {
            if (assentosVendidos[j] > assentosVendidos[j + 1]) {
                int temp = assentosVendidos[j];
                assentosVendidos[j] = assentosVendidos[j + 1];
                assentosVendidos[j + 1] = temp;
            }
        }
    }
}

void exibirAssentosComprados(const int assentosVendidos[], int qtdVendida) {
    if (qtdVendida == 0) {
        cout << "\nNenhum assento foi vendido ate o momento.\n";
        return;
    }

    int copiaVendidos[total_assentos];
    for (int i = 0; i < qtdVendida; i++) {
        copiaVendidos[i] = assentosVendidos[i];
    }

    ordenarAssentos(copiaVendidos, qtdVendida);

    cout << "\n--- ASSENTOS VENDIDOS (ORDEM CRESCENTE) ---\n";
    for (int i = 0; i < qtdVendida; i++) {
        cout << "Assento " << setfill('0') << setw(3) << copiaVendidos[i] << endl;
    }
    cout << setfill(' ');
}

void exibirRelatorioFinal(int qtdVendida) {
    float faturamentoTotal = qtdVendida * preco_ingresso;
    float porcentagemOcupacao = ((float)qtdVendida / total_assentos) * 100.0;

    cout << "\n --- RELATORIO FINAL --- =\n";
    cout << "Total de ingressos vendidos: " << qtdVendida << endl;
    cout << "Total de assentos livres   : " << (total_assentos - qtdVendida) << endl;
    cout << "Taxa de ocupacao da sala   : " << fixed << setprecision(2) << porcentagemOcupacao << "%\n";
    cout << "Faturamento total          : R$ " << fixed << setprecision(2) << faturamentoTotal << endl;
}
