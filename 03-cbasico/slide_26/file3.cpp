#include <iostream>

int main() {
    float temperatura;

    std::cout << "Digite a temperatura da água: ";
    std::cin >> temperatura;

    if (temperatura <= 0) {
        std::cout << "A água está congelada." << std::endl;
    } else if (temperatura > 0 && temperatura < 100) {
        std::cout << "A água está em estado líquido." << std::endl;
    } else {
        std::cout << "A água está fervendo." << std::endl;
    }

    return 0;
}