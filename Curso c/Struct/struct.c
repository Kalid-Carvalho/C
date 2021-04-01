#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

// criando variavel struct
struct Aluno{
    int codigo;
    char nome[30];
    float nota;
};

// programa que cria struct e aluno e funcao que imprime nome de aluno
int main()
{
    // Define o valor das páginas de código UTF8 e default do Windows
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();

    // Define codificação como sendo UTF-8
    SetConsoleOutputCP(CPAGE_UTF8);

    //criando variavel struct dealuno
    struct Aluno aluno_especial;

    //inicializando valores de struct
    aluno_especial.codigo = 0;
    strcpy(aluno_especial.nome, "Kalid");
    aluno_especial.nota = 10.00;

    //exibindo dados de uma struct
    printf("Código: %d \n", aluno_especial.codigo);
    printf("Nome: %s \n", aluno_especial.nome);
    printf("Nota: %.2f \n", aluno_especial.nota);

    system("\n pause");
    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}