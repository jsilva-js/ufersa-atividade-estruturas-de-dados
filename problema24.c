#include <stdio.h>

int main() {
    int N, i, somatorio = 0;

    printf("Digite um valor inteiro positivo N: ");
    scanf("%d", &N);

    // Calculando o somatório
    for (i = 1; i <= N; i++) {
        somatorio += i;
    }

    printf("O somatório dos valores de 1 até %d é: %d\n", N, somatorio);

    return 0;
}
