#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define TENTATIVAS_NIVEL_FACIL 20
#define TENTATIVAS_NIVEL_MEDIO 15
#define TENTATIVAS_NIVEL_DIFICIL 6
#define PONTOS_INICIAL 1000

int main(){
  setlocale(LC_ALL,"portuguese");

        printf("\n\n");
        printf("          P  /_\\  P                              \n");
        printf("         /_\\_|_|_/_\\                            \n");
        printf("     n_n | ||. .|| | n_n         Bem vindo ao     \n");
        printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação! \n");
        printf("    |\" \"  |  |_|  |\"  \" |                     \n");
        printf("    |_____| ' _ ' |_____|                         \n");
        printf("          \\__|_|__/                              \n");
        printf("\n\n");

    int jogarnovamente;

    int segundos = time(0);
    srand(segundos);
    int numerogrande = rand();
    int numerosecreto = numerogrande % 100;
    double pontos;
    int chute;
    int nivel;
    int totaltentativas;
    int acertou = 0;

    while(jogarnovamente != 0){

    printf("\n\nQual o nível de dificuldade?\n");
    printf("(1)Fácil (2)Médio (3)Difícil\n");
    printf("Escolha: ");
    scanf("%d",&nivel);

    switch(nivel){
        case 1:
        totaltentativas = TENTATIVAS_NIVEL_FACIL;
        break;
        case 2:
        totaltentativas = TENTATIVAS_NIVEL_MEDIO;
        break;
        default:
        totaltentativas = TENTATIVAS_NIVEL_DIFICIL;
        break;
    }

    for(int i = 1; i <= totaltentativas; i++) {
            int ultimo_numero_chutado = chute;
            printf("\nTentativa %d de %d\n", i, totaltentativas);
            printf("Chute um número: ");
            scanf("%d",&chute);
        if (chute<0){
            printf("Você não pode chutar números negativos. \n\n");
            i--;
            continue;
        }else if (chute == ultimo_numero_chutado){
           printf("Você ja chutou esse número, escolha outro. \n\n");
           i--;
           continue;
        }
            acertou = chute == numerosecreto;
            int maior = chute > numerosecreto;
        if (acertou){
            printf("Parabéns ! Você acertou!\n\n");
        break;
        }else if(maior){
            printf("seu chute foi maior que o número secreto. \n\n");
        }else{
            printf("Seu chute foi menor que o número secreto. \n\n");
        }
            double pontosperdidos = abs(chute - numerosecreto) / 2.0; // abs transforma numeros negativos em positivos.
            pontos  = PONTOS_INICIAL - pontosperdidos;
        }
    if (acertou == 1){
                printf("             OOOOOOOOOOO               \n");
                printf("         OOOOOOOOOOOOOOOOOOO           \n");
                printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
                printf("    OOOOOO      OOOOO      OOOOOO      \n");
                printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
                printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
                printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
                printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
                printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
                printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
                printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
                printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
                printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
                printf("         OOOOOO         OOOOOO         \n");
                printf("             OOOOOOOOOOOO              \n");
                printf("Você fez %.2f pontos\n",pontos);
                printf("Fim de jogo !!\n");
    }else{
        printf("       \\|/ ____ \\|/    \n");
        printf("        @~/ ,. \\~@      \n");
        printf("       /_( \\__/ )_\\    \n");
        printf("          \\__U_/        \n");
        printf("Você perdeu! Tente novamente!");
    }
   printf("\n\nJogar novamente? \n");
   printf("\n(1) SIM (0) NÃO\n");
   printf("\nEscolha:");
   scanf("%d",&jogarnovamente);
  }
   printf("\nFim de jogo !! \n");
    system("pause");
}
