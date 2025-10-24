#include <stdio.h>
#include <stdlib.h> //rand(), srand()
#include <time.h> //time()
int main() {
    int i = 0;
    int vet[10];

    srand(time(NULL)); //inicializa o gerador
    for(i = 0;i<10;i++){
        vet[i] = rand() % 100;
    }

    //mostra o conteúdo do vetor
    for(i=0;i<10;i++){
        printf("%d ",vet[i]);
    }
    return 0;
}