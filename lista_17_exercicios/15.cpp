#include <stdio.h>

int main() {
    float distancia, consumo, precoGasolina, litros, custo;

    // Dados fornecidos
    distancia = 520;
    consumo = 12;
    precoGasolina = 2.60;

    // Cálculo da quantidade de litros e custo da viagem
    litros = distancia / consumo;
    custo = litros * precoGasolina;

    // Exibição dos resultados
    printf("Quantidade de litros necessários: %.2f\n", litros);
    printf("Custo da viagem: R$ %.2f\n", custo);

    return 0;
}