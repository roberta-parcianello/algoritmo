#include <stdio.h>

//procedimento para ler os valores de um vetor
void leVetor(int vet[],int tam){
    printf("Digite %d valores no vetor", tam);
    for(int i=0;i<tam;i++){
        printf("vet[%d]:",i);
        scanf("%d",&vet[i]);
    }
}

void escreveVetor(int vet[], int tam){
    for(int i=0;i<tam;i++){
        printf("%d ",vet[i]);
    }
}

void escreveIguais(int vet[], int tam){
    int encontrou = 0;
    printf("Valores Repetidos\n");
    for(int i=0;i<tam;i++){
        for(int j= i+1; j<tam; j++){
            if(vet[i]==vet[j]){
                printf("%d nas posicoes %d e %d \n",vet[i], i, j);
                encontrou = 1;
            }
        }
    }
    if(!encontrou){
        printf("Nao tem valores repetidos");
    }
}

int main() {
    int vetor[10];
    leVetor(vetor,10);
    escreveVetor(vetor,10);
    escreveIguais(vetor, 10);
    return 0;
}