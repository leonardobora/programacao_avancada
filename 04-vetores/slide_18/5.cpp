#include <stdio.h>

int main() {
    int vetor[20];
    int i, valor = 2;

    for (i = 0; i < 20; i++) {
        vetor[i] = valor;
        valor *= 2;
    }

    printf("Vetor: ");
    for (i = 0; i < 20; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}