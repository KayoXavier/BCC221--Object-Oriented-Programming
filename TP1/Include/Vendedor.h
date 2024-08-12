#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "Funcionario.h"

using namespace std;

class Vendedor : public Funcionario {
public:
    Vendedor(const string& nome, const string& cpf, int idFuncionario);
    ~Vendedor();  // Destrutor

    void realizarTarefas();
    void cadastrarCliente();
};

#endif
