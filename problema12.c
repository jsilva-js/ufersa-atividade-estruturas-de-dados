#include <stdio.h>

void decimalParaRomano(int numero) {
    int valores[] = {100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *simbolos[] = {"C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    for (int i = 0; i < 9; i++) {
        while (numero >= valores[i]) {
            printf("%s", simbolos[i]);
            numero -= valores[i];
        }
    }
}

int main() {
    for (int i = 1; i <= 100; i++) {
        printf("%3d: ", i);
        decimalParaRomano(i);
        printf("\n");
    }

    return 0;
}
