#include "Vendedor.h"
#include <iostream>

using namespace std;

// Implementação do construtor de Vendedor
Vendedor::Vendedor(const string& nome, const string& cpf, int idFuncionario)
    : Funcionario(nome, cpf, idFuncionario) {}

// Implementação do método realizarTarefas
void Vendedor::realizarTarefas() const {
    cout << "Realizando tarefas de vendedor..." << endl;
}

// Exemplo de um método específico para Vendedor
void Vendedor::cadastrarCliente() {
    cout << "Cadastrando um cliente..." << endl;
}
