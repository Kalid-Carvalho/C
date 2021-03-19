#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    // Define o valor das páginas de código UTF8 e default do Windows
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();

    // Define codificação como sendo UTF-8
    SetConsoleOutputCP(CPAGE_UTF8);

    // declarando um ponteiro
    int *ptr;

    // alocando dincamicamente memoria na variavel p
    ptr = (int*) malloc(10 * sizeof(int));

    // caso não consiga alocar ira gerar um erro(malloc retorna NULL caso nao consiga alocar memoria)
    if(ptr == NULL){

        printf("Erro !! espaço insuficiente");
        exit(1);

    }else{ // caso não de erro imprime normalmente 10 valores
        printf("Primeiros 10 números.\n ");
        for (int i = 0; i < 10; i++)
        {
            ptr[i] = i + 10;
            printf("%d - %d \n",i, ptr[i]);
        }
        //realocando mais elementos com a função realloc
        ptr = (int*) realloc(ptr,20 * sizeof(int));

        printf("\nRealocado mais 10 números \n");
        
        for (int i = 10; i < 20; i++)
        {
            ptr[i] = i + 20;
            printf("%d - %d \n",i , ptr[i]);
        }
    }

    printf("\nImprimindo todos os 20 números alocados: \n");

    for (int i = 0; i < 20; i++)
    {
        printf("%d - %d \n",i , ptr[i]);
    }

    // liberando espaço de memoria que foi alocado na variavel free
    free(ptr);

    system("\npause");
    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}