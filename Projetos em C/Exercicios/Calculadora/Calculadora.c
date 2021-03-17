#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define OPERADOR_ADICAO 43
#define OPERADOR_SUBTRACAO 45
#define OPERADOR_MULTIPLICACAO 42
#define OPERADOR_DIVISAO 47

int main(){
    setlocale(LC_ALL,"portuguese");

    int n1,n2;
    char operador;

    printf("Informe um valor: ");
    scanf("%d",&n1);

    printf("Informe um operador(+,-,*,/): ");
    scanf(" %c", &operador);

    printf("Informe outro valor: ");
    scanf("%d",&n2);

    if(operador == OPERADOR_ADICAO) // valor de + na tabela ASCII
    {
        printf("Resultado: %d\n",n1+n2);
    }
    else if(operador == OPERADOR_SUBTRACAO) // valor de - na tabela ASCII
    {
        printf("Resultado: %d\n", n1-n2);
    }
    else if(operador == OPERADOR_MULTIPLICACAO) // valor de * na tabela ASCII
    {
        printf("Resultado: %d\n",n1*n2);
    }
    else if(operador == OPERADOR_DIVISAO) // valor de / na tabela ASCII
    {
       printf("Resultado: %d\n",n1*n2);
    }
    else
    {
        printf("Operador invalido. \n");
    }
    system("PAUSE");
    return 0;
}
