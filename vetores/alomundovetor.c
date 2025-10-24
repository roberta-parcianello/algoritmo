#include <stdio.h>

int main() {
    printf("Hello, World Vetor!\n");
    printf("Exemplos de Variaveis Compostas Homogeneas Estaticas");
    int vet[5];
    //acesso direto
    vet[0]=1;
    int i = 1;
    vet[i] = 45;
    vet[25*1/5-1] = 2;
    vet[2] = 1;
    vet[3] = 1;
   // printf("%d",vet[0]);
    for(int pos=0;pos<5;pos++){
        printf("%d \n",vet[pos]);
    }
    return 0;
}