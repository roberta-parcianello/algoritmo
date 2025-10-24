#include <stdio.h>

void inserirElemento(int v[],int *tam, int valor){
    v[*tam] = valor;
    (*tam)++;
}

void removerElemento(int v[],int *tam, int pos){
    if(pos<0 || pos>=*tam){
        printf("posicao invalida");
    }else{
        for(int i = pos; i<*tam-1;i++){
            v[i]=v[i+1];
        }
        (*tam)--;
    }
}

void escreverVetor(int v[], int tam){
    for(int i=0;i<tam;i++){
        printf("%d ",v[i]);
    }
}

//função que retorna um vetor - na verdade uma referencia (um ponteiro) para 
//um vetor
//dados dois vetores de tamanho5, retorne um vetor que junta os dois
int* criaVetor(int v1[], int v2[], int tam){
    static int novo[100];
    //int *novo=(int*)malloc(tam * sizeof(int)); estrutura de dados
    for(int i =0; i<tam;i++){
        novo[i]=v1[i];
    }
    for(int i=tam;i<tam*2;i++){
        novo[i]=v2[i-tam];
    }
    return novo;
}




int main() {
    int max = 10;
    int qtd = 0;
    int vetor[max];
    inserirElemento(vetor,&qtd, 5);

    printf("Hello, World!\n");
    return 0;
}