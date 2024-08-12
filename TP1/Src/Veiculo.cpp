#include "Veiculo.h"
#include <iostream>

using namespace std;

// Implementação do construtor
Veiculo::Veiculo(const string& placa, const string& modelo, const string& marca, int ano, Cliente* dono)
    : placa(placa), modelo(modelo), marca(marca), ano(ano), dono(dono) {}

// Implementação do destrutor
Veiculo::~Veiculo() {
    cout << "Destrutor de Veiculo chamado para: " << modelo << " - " << placa << endl;
}

// Implementação dos getters
string Veiculo::getPlaca() const {
    return placa;
}

string Veiculo::getModelo() const {
    return modelo;
}

string Veiculo::getMarca() const {
    return marca;
}

int Veiculo::getAno() const {
    return ano;
}

Cliente* Veiculo::getDono() const {
    return dono;
}

// Implementação dos setters
void Veiculo::setPlaca(const string& placa) {
    this->placa = placa;
}

void Veiculo::setModelo(const string& modelo) {
    this->modelo = modelo;
}

void Veiculo::setMarca(const string& marca) {
    this->marca = marca;
}

void Veiculo::setAno(int ano) {
    this->ano = ano;
}

void Veiculo::setDono(Cliente* dono) {
    this->dono = dono;
}

// Implementação do método para exibir os dados do veículo
void Veiculo::mostrarDados() const {
    cout << "Veículo: " << marca << " " << modelo << " (" << ano << ")" << endl;
    cout << "Placa: " << placa << endl;
    if (dono) {
        cout << "Dono: " << dono->getNome() << endl;
    } else {
        cout << "Dono: Não especificado" << endl;
    }
}
