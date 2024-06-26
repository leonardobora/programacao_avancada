#include <iostream>
#include <cstring>

struct CORRESPONDENCIA {
    char CEP[10];
    char rua[100];
    int numero;
    char bairro[100];
    char cidade[100];
    char estado[100];
};

int main() {
    CORRESPONDENCIA CORRESPONDENCIA_A;
    CORRESPONDENCIA CORRESPONDENCIA_B;

    // Fill the data of CORRESPONDENCIA_A
    strcpy(CORRESPONDENCIA_A.CEP, "12345-678");
    strcpy(CORRESPONDENCIA_A.rua, "Rua A");
    CORRESPONDENCIA_A.numero = 10;
    strcpy(CORRESPONDENCIA_A.bairro, "Bairro A");
    strcpy(CORRESPONDENCIA_A.cidade, "Cidade A");
    strcpy(CORRESPONDENCIA_A.estado, "Estado A");

    // Copy the data from CORRESPONDENCIA_A to CORRESPONDENCIA_B
    CORRESPONDENCIA_B = CORRESPONDENCIA_A;

    // Print the contents of CORRESPONDENCIA_B
    std::cout << "CEP: " << CORRESPONDENCIA_B.CEP << std::endl;
    std::cout << "Rua: " << CORRESPONDENCIA_B.rua << std::endl;
    std::cout << "Número: " << CORRESPONDENCIA_B.numero << std::endl;
    std::cout << "Bairro: " << CORRESPONDENCIA_B.bairro << std::endl;
    std::cout << "Cidade: " << CORRESPONDENCIA_B.cidade << std::endl;
    std::cout << "Estado: " << CORRESPONDENCIA_B.estado << std::endl;

    return 0;
}