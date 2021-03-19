#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//programa para alocar dinamicamente tamanhos em um vetor

//função para alocar vetor
int* alocaVetor(int tamanho){

    int *aux;

    aux = (int*) malloc(tamanho * sizeof(int));// função malloc retorna ponteiro

    return aux;
}

int main(){
    setlocale(LC_ALL,"portugues");

    //declarando variaveis
    int *vetor, tamanho, i;


    //pegando tamanho do vetor que vai ser alocado
    printf("Informe o tamanho do vetor: ");
        scanf("%d", &tamanho);
    
    //alocando dinamicamente na variavel vetor atraves da função aloca vetor
    vetor = alocaVetor(tamanho);

    // declarando manualmente o vetor
    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;

    //imprimindo vetor
    for(i = 0; i < tamanho; i++){
        printf("Posição do vetor: %d \n", i);
        printf("Valor: $d \n", vetor[i]);
    }

    system("pause");
    return 0;
}