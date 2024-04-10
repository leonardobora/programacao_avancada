#include <stdio.h>

int main() {
    int num1, num2, soma, subtracao;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    subtracao = num1 - num2;

    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);

    return 0;
}