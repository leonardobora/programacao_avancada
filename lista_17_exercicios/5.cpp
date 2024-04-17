#include <stdio.h>

int main() {
    float lado1, lado2, perimetro;

    printf("Informe o primeiro lado do quadrado: ");
    scanf("%f", &lado1);

    printf("Informe o segundo lado do quadrado: ");
    scanf("%f", &lado2);

    perimetro = 2 * (lado1 + lado2);

    printf("O perímetro do quadrado é: %.2f\n", perimetro);

    return 0;
}