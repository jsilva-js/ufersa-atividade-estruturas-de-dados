#include <stdio.h>
#include <stdbool.h>

bool eh_primo(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    printf("Os números primos de 1 a 100 são:\n");
    for (int i = 1; i <= 100; i++) {
        if (eh_primo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
