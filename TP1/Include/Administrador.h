#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

#include <string>
#include <vector>
#include "Vendedor.h"
#include "Mecanico.h"

using namespace std;

class Administrador {
private:
    string nome;
    string senha;  // Senha fixa para simplificação

public:
    // Construtor
    Administrador(const string& nome, const string& senha);

    // Métodos para editar os dados de vendedores e mecânicos
    void editarVendedor(Vendedor* vendedor, const string& novoNome, const string& novoCpf, int novoIdFuncionario);
    void editarMecanico(Mecanico* mecanico, const string& novoNome, const string& novoCpf, int novoIdFuncionario);

    // Getters
    string getNome() const;
    string getSenha() const;

    // Método para exibir o menu do administrador
    void exibirMenu(vector<Vendedor*>& vendedores, vector<Mecanico*>& mecanicos);
};

#endif
