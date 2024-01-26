#include <stdio.h>

int somaDigitos(int numero) {
    int soma = 0;

    while (numero != 0) {
        soma += numero % 10;
        numero /= 10;
    }

    return soma;
}

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("A soma dos digitos de %d eh: %d\n", numero, somaDigitos(numero));

    return 0;
}
