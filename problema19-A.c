#include <stdio.h>

void temRaizesReais(int a, int b, int c) {
    int discriminante = b*b - 4*a*c;
    if (discriminante >= 0) {
        printf("A função tem raízes reais.\n");
    } else {
        printf("A função não tem raízes reais.\n");
    }
}

int main() {
    int a, b, c;
    printf("Digite os coeficientes a, b e c: ");
    scanf("%d %d %d", &a, &b, &c);
    temRaizesReais(a, b, c);
    return 0;
}
