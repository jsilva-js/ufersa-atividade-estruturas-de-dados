#include <stdio.h>

void encontraTriplosPitagoricos(int n) {
    int cateto1, cateto2, hipotenusa;

    printf("Triplos pitagóricos para n = %d:\n", n);

    for (cateto1 = 1; cateto1 <= n; cateto1++) {
        for (cateto2 = cateto1; cateto2 <= n; cateto2++) {
            for (hipotenusa = cateto2; hipotenusa <= n; hipotenusa++) {
                if (cateto1 * cateto1 + cateto2 * cateto2 == hipotenusa * hipotenusa) {
                    printf("(%d, %d, %d)\n", cateto1, cateto2, hipotenusa);
                }
            }
        }
    }
}

int main() {
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    encontraTriplosPitagoricos(n);

    return 0;
}
