#include <stdio.h>

int ackermann(int m, int n) {
    if (m == 0) {
        return n + 1;
    } else if (m > 0 && n == 0) {
        return ackermann(m - 1, 1);
    } else if (m > 0 && n > 0) {
        return ackermann(m - 1, ackermann(m, n - 1));
    }
}

int main() {
    int resultado = ackermann(3,4); // Exemplo com m=3 e n=4
    printf("Resultado: %d\\n", resultado);
    
    return 0;
}
