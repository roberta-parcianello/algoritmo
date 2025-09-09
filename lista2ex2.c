#include <stdio.h>
//Faça um algoritmo para receber um número qualquer e 
//informar na tela se é par ou ímpar.
int main()
{
    int numero;
    int resto;

    resto = numero % 2;

    if(resto == 0){
        printf("%d eh par",numero);
    }else{
        printf("%d eh impar",numero);
    }

}
