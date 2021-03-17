#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    // aplicação para pagar o total de horas usadas.
    float tot_pagar,preco1,preco2;
    int tot_hora;

    preco1 = 5.00;
    preco2 = 10.00;

    printf("Informe o total de horas usadas: ");
        scanf("%f",&tot_hora);
         tot_pagar = tot_hora / 3 * 10;
         tot_pagar += tot_hora % 3 *5;
     printf("Total a pagar: %f, por %d horas",tot_pagar,tot_hora);

 system("PAUSE");
}
