#include <stdio.h>
#include <math.h>

double hipotenusa(double lado1, double lado2) {
    double hipotenusa = sqrt(pow(lado1, 2) + pow(lado2, 2));
    return hipotenusa;
}

int main() {
    double lado1, lado2;

    printf("Digite o comprimento do primeiro lado: ");
    scanf("%lf", &lado1);

    printf("Digite o comprimento do segundo lado: ");
    scanf("%lf", &lado2);

    double resultado = hipotenusa(lado1, lado2);
    printf("A hipotenusa é: %.2lf\n", resultado);

    return 0;
}
