#include <stdio.h>
#include <stdlib.h> //rand(), srand()
#include <time.h> //time()
/*
Leia um vetor de 20 posições e em seguida um valor X qualquer. 
Seu programa deverá fazer uma busca do valor de X no vetor lido e 
informar a posição em que foi encontrado ou se não foi encontrado.

*/
int main() {
    int vet[20], x,  pos =-1;
   // srand(time(NULL)); //inicializa o gerador
    for (int i=0;i<20;i++){
        vet[i] = rand() % 100;
    }
  
      for(int i=0;i<20;i++){
        printf("%d  ",vet[i]);
    }
    printf("Escolha um numero: ");
    scanf("%d",&x);

    for(int i=0;i<20;i++){
        if(vet[i]==x){
            pos = i;
            break;
        }
    }
    if (pos==-1){
         printf("numero %d nao encontrado no vetor", x);
    }else{
        printf("%d encontrado na %d posicao", x, pos);
    }
    
    return 0;
}