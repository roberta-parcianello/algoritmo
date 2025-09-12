#include <stdio.h>

int main() {
    printf("Apresenta as tabuadas de 1 a 10\n");
    //declara a variavel e inicia; verifica a condicao; incrementa o i
    for(int i=1; i<=10;i++){
        printf("Tabuada do %d\n",i);
        for(int j=0; j<=10;j++){
            printf("%d x %d = %d\n",i,j, i*j);
        }
        printf("\n");
    }
    return 0;
}