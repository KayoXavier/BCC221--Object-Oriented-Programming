#ifndef VEICULO_H
#define VEICULO_H

#include <string>
#include "Cliente.h"

using namespace std;

class Cliente;  // Declaração antecipada para evitar dependência circular

class Veiculo {
private:
    string placa;
    string modelo;
    string marca;
    int ano;
    Cliente* dono;  // Ponteiro para o cliente que é dono do veículo

public:
    // Construtor
    Veiculo(const string& placa, const string& modelo, const string& marca, int ano, Cliente* dono);

    // Destrutor
    ~Veiculo();

    // Getters
    string getPlaca() const;
    string getModelo() const;
    string getMarca() const;
    int getAno() const;
    Cliente* getDono() const;

    // Setters
    void setPlaca(const string& placa);
    void setModelo(const string& modelo);
    void setMarca(const string& marca);
    void setAno(int ano);
    void setDono(Cliente* dono);

    // Exibe as informações do veículo
    void mostrarDados() const;
};

#endif
