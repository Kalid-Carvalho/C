#include <stdio.h>
//programa para alocar dinamicamente tamanhos em um vetor


int main(){

    //declarando variaveis
    int *vetor, tamanho;


    //pegando tamanho do vetor que vai ser alocado
    printf("Informe o tamanho do vetor");
        scanf("%d", tamanho);
    
    alocaVetor();


    system("pause");
    return 0;
}