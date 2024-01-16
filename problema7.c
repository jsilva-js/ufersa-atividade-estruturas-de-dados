#include <stdio.h>

int main() {
    int i, j, num;

    for(i = 1; i <= 5; i++) {
        printf("Digite o %dº número (entre 1 e 30): ", i);
        scanf("%d", &num);

        for(j = 1; j <= num; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
