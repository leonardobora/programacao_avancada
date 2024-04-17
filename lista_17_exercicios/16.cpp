#include <stdio.h>

int main() {
    float valorTotal, valorDesconto, valorParcela, comissaoVista, comissaoParcelada;

    printf("Digite o valor total da venda: ");
    scanf("%f", &valorTotal);

    valorDesconto = valorTotal * 0.9;
    valorParcela = valorTotal / 3;
    comissaoVista = valorDesconto * 0.05;
    comissaoParcelada = valorTotal * 0.05;

    printf("Total a pagar com desconto de 10%%: R$ %.2f\n", valorDesconto);
    printf("Valor de cada parcela (3x sem juros): R$ %.2f\n", valorParcela);
    printf("Comissão do vendedor (venda à vista): R$ %.2f\n", comissaoVista);
    printf("Comissão do vendedor (venda parcelada): R$ %.2f\n", comissaoParcelada);

    return 0;
}