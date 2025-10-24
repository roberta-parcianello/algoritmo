#include <stdio.h>
#include <stdlib.h> //rand(), srand()
#include <time.h> //time()
int main() {
    int i = 0, par =0, impar =0, maior50=0,menor7=0;
    int tam = 20;
    int vet[tam];
    srand(time(NULL)); //inicializa o gerador
    for(i = 0;i<tam;i++){
        vet[i] = rand() % 100;//sorteia um valor
        if(vet[i]%2==0){
            par++;
        }else{
            impar++;
        }
        if(vet[i]>50) maior50++;
        if(vet[i]<7) menor7++;
    }

    //mostra o conteúdo do vetor
    for(i=0;i<tam;i++){
        printf("%d ",vet[i]);
    }
    printf("total de pares: %d \n",par);
    printf("total de impares: %d \n", impar);
    printf("maiores que 50: %d \n",maior50 );
    printf("menores que 7: %d \n", menor7);
    return 0;
}