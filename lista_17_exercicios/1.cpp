#include <stdio.h>

int main() {
    int num1, num2, temp;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    // Inverte os valores
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("Valores invertidos:\n");
    printf("Primeiro numero: %d\n", num1);
    printf("Segundo numero: %d\n", num2);

    return 0;
}