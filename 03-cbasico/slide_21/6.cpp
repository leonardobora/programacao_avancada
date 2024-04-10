#include <stdio.h>

int main() {
    float lado1, lado2, perimetro;

    printf("Informe o primeiro lado do triângulo: ");
    scanf("%f", &lado1);

    printf("Informe o segundo lado do triângulo: ");
    scanf("%f", &lado2);

    perimetro = lado1 + lado2 + lado2;

    printf("O perímetro do triângulo é: %.2f\n", perimetro);

    return 0;
}