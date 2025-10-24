#include <stdio.h>
/*Escreva um programa que leia dois vetores de 10 posições 
e faça a soma dos elementos de mesmo índice, colocando o 
resultado em um terceiro vetor. Mostre o vetor resultante.  */
int main() {
    int vet1[10], vet2[10],resultado[10];
    printf("Digite os dados para o vet1 \n");
    for(int i=0;i<10;i++){
        printf("vet1[%d]: ",i);
        scanf("%d",&vet1[i]);
    }
    for(int i=0;i<10;i++){
        printf("vet2[%d]: ",i);
        scanf("%d",&vet2[i]);
    }
    for(int i=0;i<10;i++){
        resultado[i]=vet1[i]+vet2[i];
    }
    for(int i=0;i<10;i++){
        printf("%d +%d = %d \n",vet1[i],vet2[i],resultado[i]);
    }
    return 0;
}