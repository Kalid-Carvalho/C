#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//função para imprimir todas as estruturas de aluno
void imprimiDados(aluno aluno_regular)
{
    printf("Código: %d \n", aluno_regular.codigo);
    printf("Nome: %s \n", aluno_regular.nome);
    printf("Nota: %.2f \n", aluno_regular.nota);
}

// programa que cria struct e aluno e funcao que imprime nome de aluno
int main()
{
    // Define o valor das páginas de código UTF8 e default do Windows
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();

    // Define codificação como sendo UTF-8
    SetConsoleOutputCP(CPAGE_UTF8);

    // criando variavel struct
    struct aluno(
        char nome[30];
        int codigo;
        float nota;
    );

    //criando variavel struct dealuno
    struct aluno aluno_especial;

    //inicializando valores de struct
    aluno_especial.codigo = 1;
    aluno_especial.nome = strcpy(aluno_especial.nome, "Kalid");
    aluno_especial.nota = 10.00;

    imprimiDados(aluno_especial);

    system("\npause");
    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}