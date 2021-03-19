//programa para alocar dinamicamente tamanhos em um vetor
#include <stdio.h>
#include <stdlib.h>


//declarando função para alocar vetor
int* alocaVetor(int tamanho){

    int *aux;

    aux = (int*) malloc(tamanho * sizeof(int));// função malloc retorna ponteiro

    return aux;
}
// inicio do programa
int main(){

    //declarando variaveis
    int *vetor, tamanho;//* indica que uma variavel é um ponteiro


    //pegando tamanho do vetor que vai ser alocado
    printf("Informe o tamanho do vetor: ");
        scanf("%d", &tamanho);
    
    vetor = alocaVetor(tamanho);


    system("pause");
    return 0;
}