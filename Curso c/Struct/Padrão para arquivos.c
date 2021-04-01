#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// declarando structs aninhadas

struct departamento
{
    int cod;
    char descrição[30];
}

struct cargo
{
    int cod;
    char descrição[30];
}

struct funcionario
{
    int cod;
    int nome char[30];
    float salario;
    struct departamento depto;
    struct cargo cargo;
}

struct funcionario Funcionario;

int main(){

    // Define o valor das páginas de código UTF8 e default do Windows
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();

    // Define codificação como sendo UTF-8
    SetConsoleOutputCP(CPAGE_UTF8);

    system("\npause");
    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}