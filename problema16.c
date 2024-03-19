#include <stdio.h>

void desenhaRetangulo(int lado1, int lado2, char caractere) {
    for(int i = 0; i < lado1; i++) {
        for(int j = 0; j < lado2; j++) {
            printf("%c", caractere);
        }
        printf("\n");
    }
}

int main() {
    int lado1, lado2;
    char caractere;
    printf("Digite os lados do retângulo e o caractere para imprimir: ");
    scanf("%d %d %c", &lado1, &lado2, &caractere);
    desenhaRetangulo(lado1, lado2, caractere);
    return 0;
}