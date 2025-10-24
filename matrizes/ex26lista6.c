#include <stdio.h>

int somaAcimaDiagonal(int matriz[10][10], int tam){
    int soma=0;

    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            soma += matriz[i][j];
        }
    }
    return soma;
}

int main() {
    int matriz[10][10];
    for(int i=0;i<10;i++){
        for (int j=0; j<10;j++){
            printf("matriz[%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }    
   
    printf("A soma dos valores acima da diagonal principal = %d",
    somaAcimaDiagonal(matriz,10));

    return 0;
}