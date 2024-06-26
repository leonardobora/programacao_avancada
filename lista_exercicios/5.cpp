#include <stdio.h>
#include <string.h>

#define MAX_SIZE 5

struct CADASTRO {
    char nome[50];
    int idade;
};

int main() {
    struct CADASTRO vetor[MAX_SIZE];
    int i, max_idade = 0, index = 0;

    // Cadastro dos dados
    for (i = 0; i < MAX_SIZE; i++) {
        printf("Digite o nome: ");
        scanf("%s", vetor[i].nome);
        printf("Digite a idade: ");
        scanf("%d", &vetor[i].idade);
    }

    // Busca da struct com a maior idade
    for (i = 0; i < MAX_SIZE; i++) {
        if (vetor[i].idade > max_idade) {
            max_idade = vetor[i].idade;
            index = i;
        }
    }

    // Impressão do resultado
    printf("A pessoa mais velha é: %s, com %d anos.\n", vetor[index].nome, vetor[index].idade);

    return 0;
}