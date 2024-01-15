#include <stdio.h>

int main() {
    int soma = 0;
    for(int i = 1; i <= 100; i++) {
        if(i % 7 == 0) {
            soma += i;
        }
    }
    printf("A soma de todos os múltiplos de 7 de 1 a 100 é: %d\n", soma);
    return 0;
}
