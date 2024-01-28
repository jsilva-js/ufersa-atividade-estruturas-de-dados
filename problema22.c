#include <stdio.h>

int multiplicacao(int x1, int x2) {
    if (x1 == 0 || x2 == 0) {
        return 0;
    }
    else if (x2 == 1) {
        return x1;
    }
    else if (x2 == -1) {
        return -x1;
    }
    else if (x2 > 0) {
        return x1 + multiplicacao(x1, x2 - 1);
    }
    else {
        return -x1 + multiplicacao(x1, x2 + 1);
    }
}

int main() {
    int x1, x2, resultado;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &x1);
    printf("Digite o segundo número: ");
    scanf("%d", &x2);
    
    resultado = multiplicacao(x1, x2);
    printf("O produto de %d e %d é %d\n", x1, x2, resultado);
    
    return 0;
}
