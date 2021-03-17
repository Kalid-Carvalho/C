#include <stdio.h>
#include <stdlib.h>

int main(){

    float n1,n2, media;
    int i;
    char continu;
    continu = "S";

    while(continu != "S"){

        printf("Informe a primeira nota: ");
        scanf("%f", &n1);
        if(n1 == 50){
            continu = "N";
            break;
        }
        printf("Informe a segunda nota: ");
        scanf("%f", &n2);

        media = (n1+n2)/2;
        printf("Media do aluno: %.2f\n",media);

        printf("Deseja ver a media de outro aluno? (S/N): \n");
        scanf(" %c", &continu);
    }

    system("PAUSE");
    return 0;
}
