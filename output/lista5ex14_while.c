#include <stdio.h>
/*Escreva um algoritmo que leia uma sequência de números do usuário 
e realize a soma desses
números. Encerre a execução quando um número negativo for digitado*/

int main() {
    int numero;
    int soma = 0;
    printf("Exercicio 14 - ler numeros\n");
    do{
        printf("informe um numero: ");
        scanf("%d",&numero);
        if(numero>=0){
            soma += numero; //soma = soma+numero;
        }
    }while(numero>=0);
    printf("A soma dos numeros = %d",soma);
    return 0;
}