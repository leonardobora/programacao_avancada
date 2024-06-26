#include <stdio.h>
#include <string.h>

#define MAX_FUNCIONARIOS 5
#define MAX_TAMANHO_TELEFONE 11

typedef struct {
    char nome[50];
    char cargo[50];
    char telefone[MAX_TAMANHO_TELEFONE];
    char email[50];
    float salario;
} Funcionario;

int main() {
    Funcionario funcionarios[MAX_FUNCIONARIOS];
    float totalSalarios = 0;
    int indiceMaiorSalario = 0;
    int i;

    // Cadastrar funcionários
    for (i = 0; i < MAX_FUNCIONARIOS; i++) {
        printf("Funcionário %d:\n", i + 1);
        printf("Nome: ");
        fgets(funcionarios[i].nome, sizeof(funcionarios[i].nome), stdin);
        printf("Cargo: ");
        fgets(funcionarios[i].cargo, sizeof(funcionarios[i].cargo), stdin);
        printf("Telefone: ");
        fgets(funcionarios[i].telefone, sizeof(funcionarios[i].telefone), stdin);
        printf("E-mail: ");
        fgets(funcionarios[i].email, sizeof(funcionarios[i].email), stdin);
        printf("Salário: ");
        scanf("%f", &funcionarios[i].salario);
        getchar(); // Limpar o buffer do teclado

        totalSalarios += funcionarios[i].salario;

        if (funcionarios[i].salario > funcionarios[indiceMaiorSalario].salario) {
            indiceMaiorSalario = i;
        }
    }

    // Imprimir total dos salários
    printf("Total dos salários: %.2f\n", totalSalarios);

    // Informar funcionário com maior salário
    printf("Funcionário com maior salário: %s", funcionarios[indiceMaiorSalario].nome);

    // Verificar se algum funcionário está com o telefone em branco
    for (i = 0; i < MAX_FUNCIONARIOS; i++) {
        if (strcmp(funcionarios[i].telefone, "\n") == 0) {
            printf("Funcionário com telefone em branco: %s", funcionarios[i].nome);
            break;
        }
    }

    return 0;
}