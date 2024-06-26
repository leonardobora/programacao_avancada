#include <stdio.h>

// Definição da struct ENDERECO
struct ENDERECO {
    char rua[50];
    int numero;
    char cidade[50];
};

// Definição da struct CADASTRO
struct CADASTRO {
    struct ENDERECO comercial;
    struct ENDERECO residencial;
};

int main() {
    struct CADASTRO cadastro;

    // Preenchendo a substruct ENDERECO comercial
    printf("Digite o endereço comercial:\n");
    printf("Rua: ");
    scanf("%s", cadastro.comercial.rua);
    printf("Número: ");
    scanf("%d", &cadastro.comercial.numero);
    printf("Cidade: ");
    scanf("%s", cadastro.comercial.cidade);

    // Preenchendo a substruct ENDERECO residencial
    printf("\nDigite o endereço residencial:\n");
    printf("Rua: ");
    scanf("%s", cadastro.residencial.rua);
    printf("Número: ");
    scanf("%d", &cadastro.residencial.numero);
    printf("Cidade: ");
    scanf("%s", cadastro.residencial.cidade);

    // Imprimindo a matriz e todo o seu conteúdo
    printf("\nMatriz de endereços:\n");
    printf("Endereço comercial:\n");
    printf("Rua: %s\n", cadastro.comercial.rua);
    printf("Número: %d\n", cadastro.comercial.numero);
    printf("Cidade: %s\n", cadastro.comercial.cidade);
    printf("\nEndereço residencial:\n");
    printf("Rua: %s\n", cadastro.residencial.rua);
    printf("Número: %d\n", cadastro.residencial.numero);
    printf("Cidade: %s\n", cadastro.residencial.cidade);

    return 0;
}