#include <stdio.h>

int main() {
    int quantidade, valor, soma = 0;

    printf("Digite a quantidade de valores a serem inseridos: ");
    scanf("%d", &quantidade);

    if (quantidade <= 0) {
        printf("A quantidade de valores deve ser maior que zero.\n");
        return 1;
    }

    for (int i = 0; i < quantidade; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valor);
        soma += valor;
    }

    double media = (double)soma / quantidade;
    printf("A soma dos valores é: %d\n", soma);
    printf("A média dos valores é: %.2f\n", media);

    return 0;
}