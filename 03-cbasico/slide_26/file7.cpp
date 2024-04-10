#include <iostream>

int main() {
    float weight, height, bmi;

    // Prompt the user for weight and height
    std::cout << "Digite seu peso (em kg): ";
    std::cin >> weight;

    std::cout << "Digite sua altura (em metros): ";
    std::cin >> height;

    // Calculate BMI
    bmi = weight / (height * height);

    // Determine the category based on BMI
    std::string category;
    if (bmi < 18.5) {
        category = "Abaixo do peso";
    } else if (bmi < 25) {
        category = "Peso normal";
    } else if (bmi < 30) {
        category = "Sobrepeso";
    } else {
        category = "Obeso";
    }

    // Display the result
    std::cout << "Seu IMC é: " << bmi << std::endl;
    std::cout << "Você está na faixa: " << category << std::endl;

    return 0;
}