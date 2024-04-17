#include <stdio.h>

int main() {
    float num1, num2, media;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    media = (num1 + num2) / 2;

    printf("A média dos números é: %.2f\n", media);

    return 0;
}