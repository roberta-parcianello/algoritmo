#include <stdio.h>

// o usuario vai informar o tamanho do vetor
int main() {
    int tam;
    printf("Tamanho Vetor: ");
    scanf("%d",&tam);
    int vetor[tam];
    for(int i=0;i<tam;i++){
        printf("vetor[%d]: ",i);
        scanf("%d",&vetor[i]);
    }

    for(int i=0;i<tam;i++){
        printf("vetor[%d]= %d",i,vetor[i]);
    }
    return 0;
}