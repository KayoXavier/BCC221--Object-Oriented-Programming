#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using namespace std; 

// Classe base Pessoa
class Pessoa {

    string nome;  // Nome da pessoa
    string cpf;   // CPF da pessoa

public:
    // Construtor
    Pessoa( string nome , string cpf);

    // Destrutor virtual para permitir destruição adequada em herança
    virtual ~Pessoa();

    // Métodos para acessar os atributos
    string getNome() const;
    void setNome(string nome);

    string getCpf() const;
    void setcpf(string cpf);

};

#endif
