#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b;

    printf("Informe um numero: ");
    scanf("%d",&a);
    printf("Informe outro numero: ");
    scanf("%d",&b);

     if( a < b )
     {
        printf("%d, %d\n", a , b);
     }else if(a > b)
     {
        printf("%d, %d\n", a , b);
     }else
     {
        printf("Valores iguais.\n");
     }

    system("PAUSE");
    return 0;
}
