#include <stdio.h>

int main() {
    float lado1, lado2, area;

    printf("Informe o primeiro lado do quadrado: ");
    scanf("%f", &lado1);

    printf("Informe o segundo lado do quadrado: ");
    scanf("%f", &lado2);

    area = lado1 * lado2;

    printf("A área do quadrado é: %.2f\n", area);

    return 0;
}