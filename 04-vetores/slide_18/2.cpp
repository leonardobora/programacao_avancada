#include <iostream>

int main() {
    const int SIZE = 5;
    int vetor1[SIZE];
    int vetor2[SIZE];
    int resultado[SIZE];

    // Read numbers into first vector
    std::cout << "Entre com 5 numeros para o primeiro vetor:\n";
    for (int i = 0; i < SIZE; i++) {
        std::cin >> vetor1[i];
    }

    // Read numbers into second vector
    std::cout << "Entre com 5 numeros para o segundo vetor:\n";
    for (int i = 0; i < SIZE; i++) {
        std::cin >> vetor2[i];
    }

    // Request operation from user
    char operation;
    std::cout << "Entre a operacao (+, -, *, /): ";
    std::cin >> operation;

    // Perform operation and store result in the second vector
    for (int i = 0; i < SIZE; i++) {
        switch (operation) {
            case '+':
                resultado[i] = vetor1[i] + vetor2[i];
                break;
            case '-':
                resultado[i] = vetor1[i] - vetor2[i];
                break;
            case '*':
                resultado[i] = vetor1[i] * vetor2[i];
                break;
            case '/':
                resultado[i] = vetor1[i] / vetor2[i];
                break;
            default:
                std::cout << "Operacao Invalida!\n";
                return 0;
        }
    }

    // Print the result vector
    std::cout << "Resultado do vetor:\n";
    for (int i = 0; i < SIZE; i++) {
        std::cout << resultado[i] << " ";
    }
    std::cout << std::endl;