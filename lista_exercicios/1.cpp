#include <stdio.h>

struct Cliente {
    char nome[50];
    int idade;
    float saldo;
};

int main() {
    struct Cliente cliente;

    printf("Digite o nome do cliente: ");
    scanf("%s", cliente.nome);

    printf("Digite a idade do cliente: ");
    scanf("%d", &cliente.idade);

    printf("Digite o saldo do cliente: ");
    scanf("%f", &cliente.saldo);

    printf("\nDados do cliente:\n");
    printf("Nome: %s\n", cliente.nome);
    printf("Idade: %d\n", cliente.idade);
    printf("Saldo: %.2f\n", cliente.saldo);

    return 0;
}