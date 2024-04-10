#include <iostream>

int main() {
    float grade1, grade2, grade3, grade4;
    float average;

    std::cout << "Digite as 4 notas: ";
    std::cin >> grade1 >> grade2 >> grade3 >> grade4;

    average = (grade1 + grade2 + grade3 + grade4) / 4;

    if (average >= 7.0) {
        std::cout << "Aluno aprovado por média!" << std::endl;
    } else if (average >= 4.0) {
        std::cout << "Aluno em exame. Digite a nota do exame: ";
        float examGrade;
        std::cin >> examGrade;

        float finalGrade = (average + examGrade) / 2;

        if (finalGrade >= 5.0) {
            std::cout << "Aluno aprovado no exame!" << std::endl;
        } else {
            std::cout << "Aluno reprovado no exame!" << std::endl;
        }
    } else {
        std::cout << "Aluno reprovado direto!" << std::endl;
    }

    return 0;
}