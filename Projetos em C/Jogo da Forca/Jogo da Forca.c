#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (){

    setlocale(LC_ALL,"portuguese");

    char palavrasecreta [20];

    sprintf(palavrasecreta,"MELANCIA"); //Guarda uma palavra.

        int acertou = 0;
        int enforcou = 0;

        char chutes[26];
        int tentativas = 0;

            do{

            char chute;

            printf("Qual o seu chute? ");
            scanf(" %c",&chute);

            chutes[tentativas] = chute;
            tentativas++;

                for( int i =0; i< strlen(palavrasecreta); i++){

                    int achou = 0;

                        for(int j = 0; j < tentativas; j++){
                            if(chute[j] == palavrasecreta[i]){
                               achou = 1;
                               break;
                        }
                       if(achou){
                         printf(" %c",palavrasecreta[i]);
                       }else{
                        printf("_ ");
                       }
                    }
                }
              printf("\n");
            }
    system("pause");
}
