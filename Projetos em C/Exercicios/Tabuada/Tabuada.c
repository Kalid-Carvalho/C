#include <stdio.h>
#include <stdlib.h>

int main(){

    int tabuada, i;

    printf("Informe um numero para ver sua tabuada de 1 a 9: ");
    scanf("%d", &tabuada);

    for(i = 1; i <= 9; i++ ){
        printf("%d X %d = %d\n", tabuada, i , tabuada*i);
    }

    system("PAUSE");
    return 0;
}
