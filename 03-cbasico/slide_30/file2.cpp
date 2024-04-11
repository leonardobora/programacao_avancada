#include <iostream>

int main() {
    float num1, num2;
    int opcao;

    std::cout << "Digite o primeiro número: ";
    std::cin >> num1;

    std::cout << "Digite o segundo número: ";
    std::cin >> num2;

    std::cout << "Digite a opção desejada:\n";
    std::cout << "1 - Imprimir a soma dos dois números\n";
    std::cout << "2 - Imprimir a subtração dos dois números\n";
    std::cout << "3 - Imprimir a multiplicação dos dois números\n";
    std::cout << "4 - Imprimir a divisão dos dois números\n";
    std::cin >> opcao;

    switch (opcao) {
        case 1:
            std::cout << "A soma dos dois números é: " << num1 + num2 << std::endl;
            break;
        case 2:
            std::cout << "A subtração dos dois números é: " << num1 - num2 << std::endl;
            break;
        case 3:
            std::cout << "A multiplicação dos dois números é: " << num1 * num2 << std::endl;
            break;
        case 4:
            if (num2 != 0) {
                std::cout << "A divisão dos dois números é: " << num1 / num2 << std::endl;
            } else {
                std::cout << "Erro: divisão por zero!" << std::endl;
            }
            break;
        default:
            std::cout << "Opção inválida!" << std::endl;
            break;
    }

    return 0;
}