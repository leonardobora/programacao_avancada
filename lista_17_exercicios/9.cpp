#include <iostream>

int main() {
    double raio;
    double circunferencia;
    const double PI = 3.14159265358979323846;

    std::cout << "Digite o raio da circunferência: ";
    std::cin >> raio;

    circunferencia = 2 * PI * raio;

    std::cout << "A circunferência é: " << circunferencia << std::endl;

    return 0;
}