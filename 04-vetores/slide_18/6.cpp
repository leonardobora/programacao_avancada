#include <stdio.h>

int main() {
    int vetor1[10];
    int vetor2[10];
    
    vetor1[0] = 1; // Primeiro elemento
    
    // Preenche o vetor1 com a sequência numérica
    for (int i = 1; i < 10; i++) {
        vetor1[i] = vetor1[i-1] * 2;
    }
    
    // Preenche o vetor2 com as subtrações
    for (int i = 0; i < 10; i++) {
        vetor2[i] = vetor1[i] - vetor1[0];
    }
    
    // Imprime o vetor2
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor2[i]);
    }
    
    return 0;
}