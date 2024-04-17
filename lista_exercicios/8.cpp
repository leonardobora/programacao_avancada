#include <stdio.h>
#include <string.h>

#define MAX_FUNCIONARIOS 5
#define MAX_NOME 100
#define MAX_CARGO 100
#define MAX_TELEFONE 15
#define MAX_EMAIL 100

typedef struct {
    char nome[MAX_NOME];
    char cargo[MAX_CARGO];
    char telefone[MAX_TELEFONE];
    char email[MAX_EMAIL];
    float salario;
} Funcionario;

int main() {
    Funcionario funcionarios[MAX_FUNCIONARIOS];
    FILE *arquivo;
    int i;

    // Cadastro dos funcionários
    printf("Cadastro de funcionários:\n");
    for (i = 0; i < MAX_FUNCIONARIOS; i++) {
        printf("Funcionário %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", funcionarios[i].nome);
        printf("Cargo: ");
        scanf("%s", funcionarios[i].cargo);
        printf("Telefone: ");
        scanf("%s", funcionarios[i].telefone);
        printf("E-mail: ");
        scanf("%s", funcionarios[i].email);
        printf("Salário: ");
        scanf("%f", &funcionarios[i].salario);
    }

    // Salvando os dados em um arquivo
    arquivo = fopen("funcionarios.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Escrevendo os dados dos funcionários no arquivo
    for (i = 0; i < MAX_FUNCIONARIOS; i++) {
        fprintf(arquivo, "Funcionário %d:\n", i + 1);
        fprintf(arquivo, "Nome: %s\n", funcionarios[i].nome);
        fprintf(arquivo, "Cargo: %s\n", funcionarios[i].cargo);
        fprintf(arquivo, "Telefone: %s\n", funcionarios[i].telefone);
        fprintf(arquivo, "E-mail: %s\n", funcionarios[i].email);
        fprintf(arquivo, "Salário: %.2f\n\n", funcionarios[i].salario);
    }

    fclose(arquivo);
    printf("Dados dos funcionários foram salvos no arquivo funcionarios.txt.\n");

    return 0;
}
