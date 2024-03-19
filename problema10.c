#include <stdio.h>

int main() {
    double pi = 0;
    int i;
    
    for(i = 0; i < 1000000; i++) {
        if(i % 2 == 0) {
            pi += (1.0 / (2 * i + 1));
        } else {
            pi -= (1.0 / (2 * i + 1));
        }
    }
    
    pi *= 4;
    
    printf("O valor de π é aproximadamente: %.15f\n", pi);
    
    return 0;
}
