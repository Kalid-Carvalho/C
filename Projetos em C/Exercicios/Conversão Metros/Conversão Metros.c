#include <stdio.h>
#include <stdlib.h>

int main(){

    float metros, milimetros, centimetros, decimetros;

    printf("Informe o valor em metros: ");
    scanf("%f",&metros);

        centimetros = metros * 100;
        milimetros = centimetros * 10;
        decimetros = milimetros / 100;

    printf("Valor em centimetros: %.2f\n", centimetros);
    printf("Valor em milimetros: %.2f\n", milimetros);
    printf("Valor em decimetros: %.2f\n", decimetros);


    system("PAUSE");
    return 0;
}
