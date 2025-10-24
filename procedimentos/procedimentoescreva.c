#include <stdio.h>

void escreva(){
    printf("Este é um procedimento sem parametro \n");
}

void boaNoite(char nome[]){
    printf("Boa Noite %s!!",nome);
}

void leString(char nome[], int tam){
    fgets(nome, tam, stdin);
    printf("%s",nome);
}

void dobrar(int num){
    num = num*2;
    printf("variavel num em dobrar:%d\n",num);
}

//ponteiro
void dobrarPorReferencia(int *x){
    *x = *x * 2;
}

int main() {
    int num = 5;
    //char nomePrincipal[30];
    printf("Exemplo de procedimentos com parametros\n");
    //leString(nomePrincipal,30);
    //boaNoite(nomePrincipal);
    dobrar(num);
    printf("Variavel num no principal: %d\n",num);
    //chamar passando um endereço
    dobrarPorReferencia(&num);
    printf("Variavel num no principal: %d\n",num);
    return 0;
}