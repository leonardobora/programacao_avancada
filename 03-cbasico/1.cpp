#include <stdio.h>

int main() {
    int num1, num2, soma, subtracao;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    subtracao = num1 - num2;

    printf("A soma dos números é: %d\n", soma);
    printf("A subtração dos números é: %d\n", subtracao);

    return 0;
}