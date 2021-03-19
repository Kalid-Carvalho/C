//programa para alocar dinamicamente tamanhos em um vetor
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//função para alocar vetor (é declarado o tipo de retorno da variavel e asterisco(*))
int *alocaVetor(int tamanho)
{

    int *aux;

    aux = (int *)malloc(tamanho * sizeof(int)); // função malloc retorna ponteiro

    return aux;
}
// inicio do programa
int main()
{
    // Define o valor das páginas de código UTF8 e default do Windows
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();

    // Define codificação como sendo UTF-8
    SetConsoleOutputCP(CPAGE_UTF8);

    printf("-------------Alocação dinâmica de memória-----------------\n\n");

    //declarando variáveis
    int *vetor, tamanho; // asterisco(*) indica que uma variavel é um ponteiro

    //pegando tamanho do vetor que vai ser alocado
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    // fazendo alocação dinamica e alocando na variavel vetor
    vetor = alocaVetor(tamanho);

    //inserindo valores no vetor
    for (int i = 0; i < tamanho; i++)
    {
        printf("Informe o valor para o vetor %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // exibindo valores

    for (int i = 0; i < tamanho; i++)
    {
        printf("Vetor [%d]: %d \n",i ,vetor[i]);
    }

    //liberando memoria do vetor
    free(vetor);
    vetor = NULL;
    system("pause");
    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}