#include <iostream>
#include <cmath>

int main() {
    double numero;
    int parteInteira;

    std::cout << "Digite um número fracionário: ";
    std::cin >> numero;

    parteInteira = static_cast<int>(numero);

    std::cout << "A parte inteira do número é: " << parteInteira << std::endl;

    return 0;
}