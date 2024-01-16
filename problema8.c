#include <stdio.h>

int main() {
    int productNumber, quantity;
    float total = 0.0;

    printf("Digite pares de número do produto e quantidade vendida por dia (digite -1 para terminar):\n");

    while(1) {
        scanf("%d", &productNumber);
        if(productNumber == -1) break;
        scanf("%d", &quantity);

        switch(productNumber) {
            case 1:
                total += 3.00 * quantity * 7;
                break;
            case 2:
                total += 4.00 * quantity * 7;
                break;
            case 3:
                total += 2.80 * quantity * 7;
                break;
            case 4:
                total += 1.95 * quantity * 7;
                break;
            case 5:
                total +=5.00 * quantity *7 ;
                 break; 
            default:
                 printf("Número de produto inválido!\n");
                 return -1; 
         }
     }

     printf("Valor total de varejo de todos os produtos vendidos na última semana: %.2f R$\n",total);
     return 0; 
}