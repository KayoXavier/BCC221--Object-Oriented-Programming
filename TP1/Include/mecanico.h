#ifndef MECANICO_H
#define MECANICO_H

#include "Funcionario.h"

using namespace std;

class Mecanico : public Funcionario {
public:
    // Construtor de Mecanico
    Mecanico(const string& nome, const string& cpf, int idFuncionario);
    virtual ~Mecanico();
    // Implementação do método realizarTarefas
    void realizarTarefas() const override;

    // Outros métodos específicos do Mecanico
    void executarManutencao();  // Exemplo de método específico
};

#endif
