#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include "Pessoa.h"
#include <string>

using namespace std;

class Funcionario : public Pessoa {

    int idFuncionario;
public:
    // Construtor de Funcionario
    Funcionario(const string& nome, const string& cpf, int idFuncionario);
    Virtual ~Funcionario;
    
    int getIdFuncionario() const;
    void setIdFuncionario(int idFuncionario);

    // Método virtual para realizar tarefas, a ser implementado nas subclasses
    virtual void realizarTarefas() const = 0;
};

#endif
