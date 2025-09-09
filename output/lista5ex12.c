#include <stdio.h>
/*
Faça um algoritmo que leia 20 números e, ao final, escreva quantos estão entre 0 e 100
*/
int main() {
    int numero;
    int contaNumeros = 0;
    for(int cont=1; cont<=20; cont++){
        printf("informe um numero: ");
        scanf("%d",&numero);
        if(numero>=0 && numero<=100){
            contaNumeros++;
        }
    }
    printf("%d numeros entre 0 e 100", contaNumeros);
    return 0;
}