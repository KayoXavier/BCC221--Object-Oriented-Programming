#include "Cliente.h"
#include <iostream>

using namespace std;

Cliente::Cliente(const string& nome, const string& cpf)
    : Pessoa(nome, cpf) {}

Cliente::~Cliente() {
    cout << "Destrutor de Cliente chamado para: " << nome << endl;
    for (Veiculo* veiculo : veiculos) {
        delete veiculo;  // Libera a memória alocada para os veículos
    }
}

void Cliente::adicionarVeiculo(Veiculo* veiculo) {
    veiculos.push_back(veiculo);
}

const vector<Veiculo*>& Cliente::getVeiculos() const {
    return veiculos;
}

void Cliente::mostrarDados() const {
    cout << "Cliente: " << nome << ", CPF: " << cpf << endl;
    cout << "Veículos do cliente:" << endl;
    for (const auto& veiculo : veiculos) {
        cout << " - " << veiculo->getModelo() << " (" << veiculo->getPlaca() << ")" << endl;
    }
}
