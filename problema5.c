#include <stdio.h>

int main() {
    int n, soma = 0, soma_quadrados = 0, soma_cubos = 0;

    printf("Insira um número: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        soma += i;
        soma_quadrados += i * i;
        soma_cubos += i * i * i;
    }

    printf("A soma de todos os números naturais até %d é: %d\n", n, soma);
    printf("A soma dos quadrados de todos os números naturais até %d é: %d\n", n, soma_quadrados);
    printf("A soma dos cubos de todos os números naturais até %d é: %d\n", n, soma_cubos);

    return 0;
}