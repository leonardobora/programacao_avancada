#include <stdio.h>
#include <cmath>

int main() {
    double raio, area;
    const double PI = 3.14159265358979323846;

    printf("Digite o raio da circunferência: ");
    scanf("%lf", &raio);

    area = PI * pow(raio, 2);

    printf("A área da circunferência é: %.2lf\n", area);

    return 0;
}