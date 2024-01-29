#include <stdio.h>

int inverterNumero(int num) {
    int invertido = 0;
    
    while (num != 0) {
        invertido = invertido * 10 + num % 10;
        num /= 10;
    }
    
    return invertido;
}

int main() {
    int numero, numeroInvertido;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    numeroInvertido = inverterNumero(numero);
    
    printf("Numero invertido: %d\n", numeroInvertido);
    
    return 0;
}
