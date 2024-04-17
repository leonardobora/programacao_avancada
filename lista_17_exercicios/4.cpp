#include <stdio.h>

int main() {
    double lado1, lado2, area;

    printf("Informe o primeiro lado do quadrado: ");
    scanf("%lf", &lado1);

    printf("Informe o segundo lado do quadrado: ");
    scanf("%lf", &lado2);

    area = lado1 * lado2;

    printf("A área do quadrado é: %.2lf\n", area);

    return 0;
}