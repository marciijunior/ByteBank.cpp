#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H

#include "Conta.h"

class ContaPoupanca : public Conta {
public:
    ContaPoupanca(double saldo, Cliente cliente, int agencia) 
        : Conta(saldo, cliente, agencia) {}
    void sacar(double valor) override {
        if (saldo >= valor * 1.02) {
            saldo -= valor * 1.02;
            std::cout << "Cliente: " << cliente.getNome() << ", CPF: " << cliente.getCpfCurto() << std::endl;
        }
    }
};

#endif
