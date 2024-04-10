#include <stdio.h>

int main() {
    float preco1, preco2;

    printf("Digite o preço do primeiro produto: ");
    scanf("%f", &preco1);

    printf("Digite o preço do segundo produto: ");
    scanf("%f", &preco2);

    if (preco1 > preco2) {
        printf("O primeiro produto é mais caro que o segundo.\n");
    } else if (preco1 < preco2) {
        printf("O segundo produto é mais caro que o primeiro.\n");
    } else {
        printf("Os dois produtos têm o mesmo preço.\n");
    }

    return 0;
}