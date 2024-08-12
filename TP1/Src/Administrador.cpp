#include "Administrador.h"
#include <iostream>

using namespace std;

Administrador::Administrador(const string& nome, const string& senha)
    : nome(nome), senha(senha) {}

string Administrador::getNome() const {
    return nome;
}

string Administrador::getSenha() const {
    return senha;
}

void Administrador::editarVendedor(Vendedor* vendedor, const string& novoNome, const string& novoCpf, int novoIdFuncionario) {
    vendedor->setNome(novoNome);
    vendedor->setCpf(novoCpf);
    vendedor->setIdFuncionario(novoIdFuncionario);
    cout << "Dados do vendedor atualizados!" << endl;
}

void Administrador::editarMecanico(Mecanico* mecanico, const string& novoNome, const string& novoCpf, int novoIdFuncionario) {
    mecanico->setNome(novoNome);
    mecanico->setCpf(novoCpf);
    mecanico->setIdFuncionario(novoIdFuncionario);
    cout << "Dados do mecânico atualizados!" << endl;
}

void Administrador::exibirMenu(vector<Vendedor*>& vendedores, vector<Mecanico*>& mecanicos) {
    int opcao;
    do {
        cout << "\nMenu do Administrador\n";
        cout << "1. Editar dados de Vendedores\n";
        cout << "2. Editar dados de Mecânicos\n";
        cout << "3. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        if (opcao == 1) {
            if (vendedores.empty()) {
                cout << "Nenhum vendedor cadastrado.\n";
            } else {
                for (size_t i = 0; i < vendedores.size(); ++i) {
                    cout << i + 1 << ". " << vendedores[i]->getNome() << endl;
                }
                int indice;
                cout << "Escolha um vendedor para editar: ";
                cin >> indice;
                if (indice > 0 && indice <= (int)vendedores.size()) {
                    string novoNome, novoCpf;
                    int novoIdFuncionario;
                    cout << "Novo Nome: ";
                    cin >> novoNome;
                    cout << "Novo CPF: ";
                    cin >> novoCpf;
                    cout << "Novo ID: ";
                    cin >> novoIdFuncionario;
                    editarVendedor(vendedores[indice - 1], novoNome, novoCpf, novoIdFuncionario);
                }
            }
        } else if (opcao == 2) {
            if (mecanicos.empty()) {
                cout << "Nenhum mecânico cadastrado.\n";
            } else {
                for (size_t i = 0; i < mecanicos.size(); ++i) {
                    cout << i + 1 << ". " << mecanicos[i]->getNome() << endl;
                }
                int indice;
                cout << "Escolha um mecânico para editar: ";
                cin >> indice;
                if (indice > 0 && indice <= (int)mecanicos.size()) {
                    string novoNome, novoCpf;
                    int novoIdFuncionario;
                    cout << "Novo Nome: ";
                    cin >> novoNome;
                    cout << "Novo CPF: ";
                    cin >> novoCpf;
                    cout << "Novo ID: ";
                    cin >> novoIdFuncionario;
                    editarMecanico(mecanicos[indice - 1], novoNome, novoCpf, novoIdFuncionario);
                }
            }
        }
    } while (opcao != 3);
}
