//ponteiros

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    /*ponteiros é um tipo de variavel que armazena endereço de memória 
      sua declaração é: tipo_de_variavel *nome_do_ponteiro  
    */

    //declarando um ponteiro
        int *prt;
        float *b;
        char *c;
    
    //armazenando um endereço de memoria em um ponteiro
        int a = 20;
        prt = &a;

    // imprimindo valor do ponteiro
    printf("Endereço de memória da variavel a:  %d \n\n", prt);

    system("Pause");
    return 0;
}