#include <stdio.h>

int main() {
    printf("Celsius\tFahrenheit\n");
    
    for(int celsius = 30; celsius <= 50; celsius += 1) {
        float fahrenheit = celsius * 9.0 / 5.0 + 32;
        printf("%d\t%.2f\n", celsius, fahrenheit);
    }
    return 0;
}