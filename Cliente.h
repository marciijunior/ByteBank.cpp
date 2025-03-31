#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente {
    std::string nome;
    std::string cpf;
    
public:
    Cliente(std::string nome, std::string cpf) : nome(nome), cpf(cpf) {}
    std::string getCpf() const { return cpf; }
    std::string getNome() const { return nome; }
    std::string getCpfCurto() const { return cpf.substr(0, 3) + "********"; }
};

#endif