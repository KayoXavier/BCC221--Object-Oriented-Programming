#ifndef CLIENTE_H
#define CLIENTE_H

#include "Pessoa.h"
#include "Veiculo.h"
#include <vector>

using namespace std;

class Cliente : public Pessoa {
private:
    vector<Veiculo*> veiculos;
public:
    Cliente(const string& nome, const string& cpf);
    ~Cliente();  // Destrutor

    void adicionarVeiculo(Veiculo* veiculo);
    const vector<Veiculo*>& getVeiculos() const;
    void mostrarDados() const override;
};

#endif
