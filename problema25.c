#include <stdio.h>

int f(int m, int n) {
    if (n == 1) {
        return m + 1;
    } else if (m == 1) {
        return n + 1;
    } else {
        return f(m, n - 1) + f(m - 1, n);
    }
}

int main() {
    int resultado = f(5,5); // Exemplo de uso
    printf("Resultado: %d\n", resultado);
    return 0;
}
