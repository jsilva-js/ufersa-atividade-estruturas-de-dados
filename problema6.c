#include <stdio.h>

int main() {
    int i, n;
    long long fat = 1;

    printf("Digite um número: ");
    scanf("%d", &n);

    printf("Número\tFatorial\n");
    for(i = 1; i <= n; i++) {
        fat *= i;
        printf("%d\t%lld\n", i, fat);
    }

    return 0;
}