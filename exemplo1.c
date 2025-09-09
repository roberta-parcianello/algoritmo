#include <stdio.h>
//Faça um algoritmo que leia dois valores inteiros e 
//imprima o maior deles
int main()
{
    //declaração de variáveis
    int num1, num2;
    //entrada de dados
    printf("informe um numero inteiro: ");
    scanf("%d",&num1);
    printf("informe um numero inteiro: ");
    scanf("%d",&num2);
    if(num1>num2){
        printf("%d eh maior que %d", num1, num2);
    }
    if(num2>num1){
        printf("%d eh maior que %d", num2, num1);
    }
    if(num1==num2){
        printf("%d eh igual a %d", num1, num2);
    }
}
