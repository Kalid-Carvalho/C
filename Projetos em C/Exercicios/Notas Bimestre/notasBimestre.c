#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");

    float nota1 = 0, nota2, media;


    printf("Informe a nota do primeiro aluno: ");
    scanf("%f",&nota1);
    printf("Informe a nota do segundo aluno: ");
    scanf("%f",&nota2);



    system("PAUSE");
    return 0;
}
