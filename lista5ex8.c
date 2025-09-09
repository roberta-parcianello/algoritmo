#include <stdio.h>
#include <string.h>

int main() {
    int idade; 
    int idadeNovo = 1000;
    int cont = 0;
    char nome[50], nomeNovo[50];
    printf("Encontra o mais novo\n");
    do{
        printf("Informe seu nome: ");
        scanf("%s", &nome);
        printf("Informe sua idade: " );
        scanf("%d",&idade);
        if(idade < idadeNovo){
            idadeNovo = idade;
            //nomeNovo = nome;
            strcpy(nomeNovo,nome);
        }
        cont++;
    }while(cont<3);
    printf("%s eh a pessoa mais jovem com %d anos", nomeNovo,idadeNovo);
    return 0;
}