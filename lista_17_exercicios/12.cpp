#include <stdio.h>

int main() {
    int x, y, z;
    int resultado;

    // Solicitar os valores de x, y e z ao usuário
    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y);

    printf("Digite o valor de z: ");
    scanf("%d", &z);

    // Calcular o resultado da expressão
    resultado = ((x - 5) * y) - z;

    // Mostrar o resultado na tela
    printf("O resultado da expressão é: %d\n", resultado);

    return 0;
}