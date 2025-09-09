#include <stdio.h>
/*
ex2
Escreva um algoritmo que calcule o 
somatório dos números de um intervalo 
informado pelo usuário*/

int main()
{
    int intervalo;
    int num;
    int conta = 0;
    int soma = 0;

    printf("informe quantos numeros vai digitar ");
    scanf("%d",&intervalo);

    while(conta<intervalo){
        printf("Num: ");
        scanf("%d",&num);
        soma = soma+num;
        conta++;
    }
    printf("Soma = %d",soma);
    return 0;
}
