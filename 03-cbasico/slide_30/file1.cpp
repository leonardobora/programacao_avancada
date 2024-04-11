#include <iostream>

int main() {
    int option;

    std::cout << "Menu:" << std::endl;
    std::cout << "1. Bom dia" << std::endl;
    std::cout << "2. Boa tarde" << std::endl;
    std::cout << "3. Boa noite" << std::endl;
    std::cout << "4. Até mais" << std::endl;
    std::cout << "Choose an option: ";
    std::cin >> option;

    switch (option) {
        case 1:
            std::cout << "Bom dia" << std::endl;
            break;
        case 2:
            std::cout << "Boa tarde" << std::endl;
            break;
        case 3:
            std::cout << "Boa noite" << std::endl;
            break;
        case 4:
            std::cout << "Até mais" << std::endl;
            break;
        default:
            std::cout << "Invalid option" << std::endl;
            break;
    }

    return 0;
}