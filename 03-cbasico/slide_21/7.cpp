#define _USE_MATH_DEFINES
#include <cmath>
#include <cstdio>

int main() {
    double raio, area;

    printf("Digite o raio da circunferência: ");
    scanf("%lf", &raio);

    area = M_PI * pow(raio, 2);

    printf("A área da circunferência é: %.2lf\n", area);

    return 0;
}