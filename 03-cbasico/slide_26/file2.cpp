#include <iostream>

int main() {
    float preco1, preco2;

    std::cout << "Digite o preço do primeiro produto: ";
    std::cin >> preco1;

    std::cout << "Digite o preço do segundo produto: ";
    std::cin >> preco2;

    if (preco1 > preco2) {
        std::cout << "O primeiro produto é mais caro." << std::endl;
    } else if (preco2 > preco1) {
        std::cout << "O segundo produto é mais caro." << std::endl;
    } else {
        std::cout << "Os dois produtos têm o mesmo preço." << std::endl;
    }

    return 0;
}   