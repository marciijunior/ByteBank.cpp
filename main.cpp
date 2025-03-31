#include <iostream>
#include "Cliente.h"
#include "ContaCorrente.h"
#include "ContaPoupanca.h"

int main() {
    Cliente cliente1("Márcio José dos Santos Junior", "477CURIOSO!");
    ContaCorrente c1(cliente1, 1001);

    c1.depositar(500);
    c1.sacar(100);
    ContaPoupanca c2(50, cliente1, 1001);

    std::cout << "Poupanca: " << c2.getSaldo() << "\nCorrente: " << c1.getSaldo() << std::endl;

    return 0;
}
