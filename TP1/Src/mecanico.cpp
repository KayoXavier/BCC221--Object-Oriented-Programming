#include "Mecanico.h"
#include <iostream>

using namespace std;

// Implementação do construtor de Mecanico
Mecanico::Mecanico(const string& nome, const string& cpf, int idFuncionario)
    : Funcionario(nome, cpf, idFuncionario) {}

// Implementação do método realizarTarefas
void Mecanico::realizarTarefas() const {
    cout << "Realizando tarefas de mecânico..." << endl;
}

// Exemplo de um método específico para Mecanico
void Mecanico::executarManutencao() {
    cout << "Executando manutenção..." << endl;
}
