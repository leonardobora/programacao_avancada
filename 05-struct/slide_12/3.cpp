#include <stdio.h>

struct cliente {
    char nome[50];
    int idade;
    float saldo;
};

int main() {
    struct cliente c;

    printf("Digite o nome do cliente: ");
    scanf("%s", c.nome);

    printf("Digite a idade do cliente: ");
    scanf("%d", &c.idade);

    printf("Digite o saldo do cliente: ");
    scanf("%f", &c.saldo);

    printf("\nDados do cliente:\n");
    printf("Nome: %s\n", c.nome);
    printf("Idade: %d\n", c.idade);
    printf("Saldo: %.2f\n", c.saldo);

    return 0;
}