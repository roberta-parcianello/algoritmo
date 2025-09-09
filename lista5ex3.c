#include <stdio.h>

int main()
{
    char nome[50];
    int cont = 0;
    scanf("%s",&nome);
    while(cont<10){
        printf("%s\n",nome);
        cont++;
    }


    return 0;
}
