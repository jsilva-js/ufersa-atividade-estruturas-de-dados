#include <stdio.h>

char *dias[] = {"Domingo", "Segunda-feira", "Terça-feira", "Quarta-feira", "Quinta-feira", "Sexta-feira", "Sábado"};

int calcularDia(int dia, int mes, int ano) {
    if (mes < 3) {
        mes += 12;
        ano--;
    }
    int h = (dia + 2*(mes + 1) + 3*(mes + 1)/5 + ano + ano/4 - ano/100 + ano/400) % 7;
    return h;
}

int main() {
    int dia, mes, ano;
    printf("Digite o dia, mês e ano (DD MM AAAA): ");
    scanf("%d %d %d", &dia, &mes, &ano);
    
    int diaDaSemana = calcularDia(dia, mes, ano);
    printf("%s\n", dias[diaDaSemana]);
    
    return 0;
}
