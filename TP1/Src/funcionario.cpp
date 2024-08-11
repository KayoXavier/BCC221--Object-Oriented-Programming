#include "Funcionario.h"

// Implementação do construtor de Funcionario
Funcionario::Funcionario(const string& nome, const string& cpf, int idFuncionario)
    : Pessoa(nome, cpf), idFuncionario(idFuncionario) {}

// Implementação do getter para ID do Funcionario
int Funcionario::getIdFuncionario() const {
    return idFuncionario;
}

// Implementação do setter para ID do Funcionario
void Funcionario::setIdFuncionario(int idFuncionario) {
    this->idFuncionario = idFuncionario;
}
