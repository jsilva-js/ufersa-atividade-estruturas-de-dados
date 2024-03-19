#include <stdio.h>
#include <math.h>

void calcularRaizesReais(int a, int b, int c) {
    int discriminante = b*b - 4*a*c;
    if (discriminante >= 0) {
        double raiz1 = (-b + sqrt(discriminante)) / (2*a);
        double raiz2 = (-b - sqrt(discriminante)) / (2*a);
        printf("As raízes reais são %.2f e %.2f.\n", raiz1, raiz2);
    } else {
        printf("A função não tem raízes reais.\n");
    }
}

int main() {
    int a, b, c;
    printf("Digite os coeficientes a, b e c: ");
    scanf("%d %d %d", &a, &b, &c);
    calcularRaizesReais(a, b, c);
    return 0;
}