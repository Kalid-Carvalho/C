#include <stdio.h>
#include <stdlib.h>

//programa para alocar dinamicamente tamanhos em um vetor

//função para alocar vetor
int* alocaVetor(int tamanho){

    int *aux;

    aux = malloc (int*) (tamanho * sizeof(int));// função malloc retorna ponteiro

    returnaux
}

int main(){

    //declarando variaveis
    int *vetor, tamanho;


    //pegando tamanho do vetor que vai ser alocado
    printf("Informe o tamanho do vetor");
        scanf("%d", tamanho);
    
    vetor = alocaVetor(tamanho);


    system("pause");
    return 0;
}