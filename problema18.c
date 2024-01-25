#include <stdio.h>

int isPerfect(int num) {
    int sum = 1;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) {
                sum += num / i;
            }
        }
    }

    return (sum == num);
}

int main() {
    for (int i = 1; i <= 1000; i++) {
        if (isPerfect(i)) {
            printf("Número Perfeito: %d, Fatores: 1", i);

            for (int j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    printf(" + %d", j);
                }
            }

            printf("\n");
        }
    }

    return 0;
}
