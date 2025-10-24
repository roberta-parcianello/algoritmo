#include <stdio.h>

int main() {
    int matriz[3][3];
    printf("Exemplo matrizes \n");
//fixa coluna e caminha nas linhas
    for(int j = 0;j<3;j++){
        for(int i = 0;i<3;i++){
            scanf("%d",&matriz[i][j]);
        }
    }
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            printf("%d",matriz[i][j]);
        }
        printf("\n"); //quebra de linha
    }

    return 0;
}