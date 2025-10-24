#include <stdio.h>
/*
ex 6
Leia a idade de 20 pessoas e exiba a média das idades.
*/

int calculamedia(){
int cont = 1;
    int idade;
    int somaIdades=0;
    float media=0;
    int qtd = 20;
    
    while(cont<=qtd){
        printf("idade %d: ", cont);
        scanf("%d",&idade);
        somaIdades = somaIdades + idade;
        cont++;
    }
    return somaIdades/qtd;
}

int main()
{
    int media = calculamedia();
    printf("A media das idades informadas eh %.2f",media);

    return 0;
}
