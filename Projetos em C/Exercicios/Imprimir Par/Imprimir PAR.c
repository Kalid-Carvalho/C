#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL,"portuguese");

  int n1,n2,n3;
    printf("Informe um número: ");
     scanf("%d",&n1);
    printf("Informe outro número: ");
     scanf("%d",&n2);
    printf("Informe mais um número para ver os 3 em ordens decrescentes: ");
     scanf("%d",&n3);
      if(n1 > n2 && n1 > n3 && n2 > n3){
        printf("%d,%d,%d\n",n3,n2,n1);
      }else if (n1 > n2 && n1 > n3 && n3 > n2){
        printf("%d,%d,%d\n",n2,n3,n1);
      }else if( n2 > n3 && n2 > n1 && n1>n3){
        printf("%d,%d,%d\n",n2,n1,n3);
      }
  system("Pause");
}
