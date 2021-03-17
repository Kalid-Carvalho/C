#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;

    for(i = 0; i <= 127; i++){
        printf("%d \n",i);
    }

    for(i = 0; i <= 127; i++){
        printf("%x \n",i);
    }

    for(i = 0; i <= 127; i++){
        printf("%c \n",i);
    }


    system("PAUSE");
    return 0;
}
