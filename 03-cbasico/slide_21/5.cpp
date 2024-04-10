#include <stdio.h>
#include <math.h>

float calcularArea(float lado1, float lado2) {
    float semiperimetro = (lado1 + lado2 + lado2) / 2;
    float area = sqrt(semiperimetro * (semiperimetro - lado1) * (semiperimetro - lado2) * (semiperimetro - lado2));
    return area;
}

int main() {
    float lado1, lado2;
    printf("Informe o primeiro lado do triângulo: ");
    scanf("%f", &lado1);
    printf("Informe o segundo lado do triângulo: ");
    scanf("%f", &lado2);
    float area = calcularArea(lado1, lado2);
    printf("A área do triângulo é: %.2f\n", area);
    return 0;
}