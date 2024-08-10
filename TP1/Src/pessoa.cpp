#include "Pessoa.h"
#include <iostream>

using namespace std;

// Implementação do construtor
Pessoa::Pessoa(const string& nome, const string& cpf)
    : nome(nome), cpf(cpf) {}

// Implementação do destrutor
Pessoa::~Pessoa() {}
    // Pode ser usado para limpar recursos, se necessário

// Implementação do método para obter o nome
string Pessoa::getNome() const {
    return nome;
}

// Implementação do método para obter o CPF
string Pessoa::getCpf() const {
    return cpf;
}

// Implementação do método para definir o nome
void Pessoa::setNome(const string& nome) {
    this->nome = nome;
}

// Implementação do método para definir o CPF
void Pessoa::setCpf(const string& cpf) {
    this->cpf = cpf;
}

// Implementação do método mostrarDados (pode ser sobrescrito nas subclasses)
void Pessoa::mostrarDados() const {
    cout << "Nome: " << nome << ", CPF: " << cpf << endl;
}
