#include <stdio.h>

int main() {
    int vetor[20];
    int i;

    // Preenchendo o vetor com a sequência numérica
    for (i = 0; i < 20; i++) {
        if (i % 2 == 0) {
            vetor[i] = 1;
        } else {
            vetor[i] = -1;
        }
    }

    // Imprimindo o vetor
    for (i = 0; i < 20; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}