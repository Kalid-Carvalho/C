#include <stdio.h>
#include <stdlib.h>

int main(){

    int decimal;

    printf("Informe o valor do numero decimal para ver em octal e hexadecimal: ");
    scanf("%d",&decimal);

    printf("Octal: %o\n",decimal);
    printf("Hexadecimal: %x\n",decimal);



    system("PAUSE");
    return 0;
}
