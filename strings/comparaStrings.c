#include <stdio.h>
#include <string.h>

int main() {
    printf("Compara duas string\n");
    char palavra1[10];
    char palavra2[10];
    printf("palavra 1: ");
    fgets(palavra1,10,stdin);
    printf("palavra 2: ");
    fgets(palavra2,10,stdin);
    if(strcmp(palavra1,palavra2)==0){
        printf("palavras iguais");
    }else{
        printf("palavras diferentes");
    }

    return 0;
}