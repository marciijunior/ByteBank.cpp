#ifndef CONTA_H
#define CONTA_H

#include <stdexcept>
#include <iostream>
#include "Cliente.h"

class Conta {
    
protected:
    double saldo;
    Cliente cliente;
    int agencia;

public:
    Conta(double saldoInicial, Cliente cliente, int agencia) 
        : saldo(saldoInicial), cliente(cliente), agencia(agencia) {}
    virtual void sacar(double valor) = 0;
    void depositar(double valor) { if (valor > 0) saldo += valor; }
    void transferir(double valor, Conta& conta) {
        sacar(valor);
        conta.depositar(valor);
    }
    double getSaldo() const { return saldo; }
    Cliente getCliente() const { return cliente; }
};

#endif
