#include <stdio.h>

typedef struct {
    char rua[100];
    int numero;
    char cidade[100];
} ENDERECO;

typedef struct {
    char nome[100];
    int idade;
    ENDERECO endereco_comercial;
    ENDERECO endereco_residencial;
} CADASTRO;

int main() {
    CADASTRO vetor[5];

    // Preenchimento das structs
    for (int i = 0; i < 5; i++) {
        printf("Preencha os dados para o cadastro %d:\n", i+1);

        printf("Nome: ");
        scanf("%s", vetor[i].nome);

        printf("Idade: ");
        scanf("%d", &vetor[i].idade);

        printf("Endereço Comercial:\n");
        printf("Rua: ");
        scanf("%s", vetor[i].endereco_comercial.rua);
        printf("Número: ");
        scanf("%d", &vetor[i].endereco_comercial.numero);
        printf("Cidade: ");
        scanf("%s", vetor[i].endereco_comercial.cidade);

        printf("Endereço Residencial:\n");
        printf("Rua: ");
        scanf("%s", vetor[i].endereco_residencial.rua);
        printf("Número: ");
        scanf("%d", &vetor[i].endereco_residencial.numero);
        printf("Cidade: ");
        scanf("%s", vetor[i].endereco_residencial.cidade);

        printf("\n");
    }

    // Impressão dos dados preenchidos
    printf("Dados cadastrados:\n");
    for (int i = 0; i < 5; i++) {
        printf("Cadastro %d:\n", i+1);
        printf("Nome: %s\n", vetor[i].nome);
        printf("Idade: %d\n", vetor[i].idade);
        printf("Endereço Comercial:\n");
        printf("Rua: %s\n", vetor[i].endereco_comercial.rua);
        printf("Número: %d\n", vetor[i].endereco_comercial.numero);
        printf("Cidade: %s\n", vetor[i].endereco_comercial.cidade);
        printf("Endereço Residencial:\n");
        printf("Rua: %s\n", vetor[i].endereco_residencial.rua);
        printf("Número: %d\n", vetor[i].endereco_residencial.numero);
        printf("Cidade: %s\n", vetor[i].endereco_residencial.cidade);
        printf("\n");
    }

    return 0;
}