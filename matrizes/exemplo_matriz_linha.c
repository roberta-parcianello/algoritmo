#include <stdio.h>

int main() {
    int matriz[3][3];
    printf("Exemplo matrizes \n");
    //acessando celulas diretamente
    //matriz[0][0]=23;
    //matriz[0][1]=45;
    //printf("informe um valor: \n");
    //scanf("%d",&matriz[0][2]);
    //printf("%d",matriz[0][0]);
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            scanf("%d",&matriz[i][j]);
        }
    }
    int soma = 0;
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            soma=soma+matriz[i][j];
            printf("%d",matriz[i][j]);
        }
        printf("\n"); //quebra de linha
    }
    printf("A soma dos elementos da matriz %d \n",soma);
//escrever só o conteúdo da diagonal principal
for(int i=0;i<3;i++){
    printf("%d",matriz[i][i]);
}


    return 0;
}