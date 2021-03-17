#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    float preco, inflacao10, inflacao20, precoFinal10, precoFinal20;

    printf("Informe o preço do produto: ");
    scanf("%f", &preco);

    inflacao10 = (preco*10)/100;
    inflacao20 = (preco*20)/100;

    precoFinal10 = preco+inflacao10;
    precoFinal20 = preco+inflacao20;

    printf("Se preco for menor que 100: %f\n", precoFinal10);
    printf("Se preco for maior ou igual que 100: %f\n", precoFinal20);

    system("PAUSE");
    return 0;
}
