#include <stdio.h>

int segundosDesdeMeioDia(int horas, int minutos, int segundos) {
    int segundosTotais;

    horas = horas % 12;

    segundosTotais = horas * 3600 + minutos * 60 + segundos;

    return segundosTotais;
}

int diferencaDeTempo(int horas1, int minutos1, int segundos1, int horas2, int minutos2, int segundos2) {
    int segundosTotais1, segundosTotais2, diferenca;

    segundosTotais1 = segundosDesdeMeioDia(horas1, minutos1, segundos1);
    segundosTotais2 = segundosDesdeMeioDia(horas2, minutos2, segundos2);

    diferenca = segundosTotais2 - segundosTotais1;

    if (diferenca < 0) {
        diferenca += 12 * 3600;
    }

    return diferenca;
}

int main() {
    int horas1, minutos1, segundos1;
    int horas2, minutos2, segundos2;

    printf("Digite o primeiro tempo (horas minutos segundos): ");
    scanf("%d %d %d", &horas1, &minutos1, &segundos1);

    printf("Digite o segundo tempo (horas minutos segundos): ");
    scanf("%d %d %d", &horas2, &minutos2, &segundos2);

    int diferenca = diferencaDeTempo(horas1, minutos1, segundos1, horas2, minutos2, segundos2);

    printf("A diferença de tempo em segundos é: %d\n", diferenca);

    return 0;
}
