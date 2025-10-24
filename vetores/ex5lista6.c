#include <stdio.h>
#include <stdlib.h> //rand(), srand()
#include <time.h> //time()

/*
Criar um vetor A com 10 elementos inteiros. 
Escrever um programa que calcule e escreva:
a)a soma de elementos armazenados neste vetor que são inferiores a 15;
b)a quantidade de elementos armazenados no vetor que são iguais a 15;
c)a média dos elementos armazenados no vetor que são superiores a 15.
*/
int main() {
    int A[10], soma =0, cont15=0, somaMaior15=0, contMaior15=0; 
    float media = 0;
    srand(time(NULL)); //inicializa o gerador
    for (int i=0; i < 10; i++)
    {
        A[i]=(rand() % 201) - 100; //sorteia um valor entre -100 e +100
        if (A[i]<15) {
            soma+=A[i]; //soma = soma + A[i]
        }else if (A[i]==15){
            cont15++;
        }else{
            somaMaior15+=A[i];
            contMaior15++;
        }   
    }
    media = somaMaior15/contMaior15;

    for(int i=0;i<10;i++){
        printf("%d  ",A[i]);
    }
    printf("\n");
    printf("somatorio dos numeros maiores que 15 = %d \n", soma);
    printf("quantidade de 15 = %d \n",cont15);
    printf("somatorio numeros maiores que 15 = %d \n",somaMaior15);
    printf("quantidade de numeros maiores que 15 = %d \n", contMaior15);
    printf("media maiores que 15 = %f",media );

    return 0;
}