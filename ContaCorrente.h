#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

#include "Conta.h"

class ContaCorrente : public Conta {
    
public:
    static int numeroDeContas;
    ContaCorrente(Cliente cliente, int agencia) 
        : Conta(0, cliente, agencia) { numeroDeContas++; }
    void sacar(double valor) override {
        if (saldo >= valor * 1.1) {
            saldo -= valor * 1.1;
            std::cout << "Cliente: " << cliente.getNome() << ", CPF: " << cliente.getCpfCurto() << std::endl;
        }
    }
};

int ContaCorrente::numeroDeContas = 0;

#endif
