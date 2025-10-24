#include <stdio.h>
//Leitura de Nome: 
//Peça para o usuário digitar seu nome e mostre-o letra por letra.
int main() {
    char nome[40];
    printf("Informe um nome: ");
    fgets(nome,40,stdin);

    for(int i=0;nome[i]!='\0';i++){
        printf("%c ",nome[i]);
    }
    return 0;
}