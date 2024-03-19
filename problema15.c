#include <stdio.h>

void desenhaRetangulo(int lado1, int lado2) {
    for(int i = 0; i < lado1; i++) {
        for(int j = 0; j < lado2; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int lado1, lado2;
    printf("Digite os lados do retângulo: ");
    scanf("%d %d", &lado1, &lado2);
    desenhaRetangulo(lado1, lado2);
    return 0;
}
