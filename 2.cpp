#include <stdio.h>

int main() {
    float num1, num2, num3, num4;
    float media;

    printf("Digite quatro números: ");
    scanf("%f %f %f %f", &num1, &num2, &num3, &num4);

    media = (num1 + num2 + num3 + num4) / 4;

    printf("A média é: %.2f\n", media);

    return 0;
}