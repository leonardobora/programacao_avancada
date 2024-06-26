#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_PHONE_LENGTH 15

struct Pessoa {
    char nome[MAX_NAME_LENGTH];
    char telefone[MAX_PHONE_LENGTH];
};

int main() {
    struct Pessoa pessoa;

    // Insere o nome usando strcpy
    strcpy(pessoa.nome, "João");

    // Insere o telefone
    strcpy(pessoa.telefone, "123456789");

    // Imprime os dados da pessoa
    printf("Nome: %s\n", pessoa.nome);
    printf("Telefone: %s\n", pessoa.telefone);

    return 0;
}