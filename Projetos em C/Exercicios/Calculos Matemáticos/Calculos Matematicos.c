#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int a, b, soma;
    float seno, raizq, modulo, produto, quadrado;


    printf("Informe um numero: ");
    scanf("%d",&a);
    printf("Informe outro numero: ");
    scanf("%d",&b);

    soma = a+b;
    produto = a * pow(b,2);
    quadrado = pow(a,2);
    raizq = sqrt(pow(a,2)+ pow(b,2));
    seno = sin(a-b);
    modulo = abs(a);

    printf("\n\nA)Soma dos numeros: %d\n",soma);
    printf("B)O produto do primeiro número pelo quadrado do segundo: %.2f\n",produto);
    printf("C)O quadrado do primeiro número: %.2f\n",quadrado);
    printf("D) A raiz quadrada da soma dos quadrados: %.2f\n",raizq);
    printf("E)O seno da diferença do primeiro número pelo segundo: %.2f\n",seno);
    printf("F)O módulo do primeiro número: %.2f\n",modulo);

    system("PAUSE");
    return 0;
}
