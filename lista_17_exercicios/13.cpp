#include <stdio.h>

int main() {
    float nota1, nota2, peso1, peso2;
    float mediaPonderada;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite o peso da primeira nota: ");
    scanf("%f", &peso1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite o peso da segunda nota: ");
    scanf("%f", &peso2);

    mediaPonderada = (nota1 * peso1 + nota2 * peso2) / (peso1 + peso2);

    printf("A média ponderada é: %.2f\n", mediaPonderada);

    return 0;
}