#include <stdio.h>
#include <string.h>//para manipulação de Strings

int main() {
    char letra = 'A';
    //string é uma cadeia de caracteres terminada '\0'
    //em C não há um tipo String nativo 
    //strings são representadas por vetores de char 
     
    char nome[20] = "Luke"; //inicialização direta
    char sobrenome[20] = "Skywalker";
    char nomecompleto[40];
    
    //inicialização de uma string em c na hora da declaração
    //aspas simples a cada caracter
    char palavra[20] = {'I','n','t','e','l','l','i','s','e','n','s','e','\0'};
    char outra[10] = "changed";//usar aspas duplas
    //sempre lembrar de deixar um espaço para o \0
    //Entrada de dados 
    //scanf (cuidado), gets(obsoleto), fgets
    //scanf("%s",&nome);//lê só até o espaço em branco - serve pra uma única palavra
   // printf("%s",nome);
    //fgets
   // fgets(nome,20,stdin);
   // printf("%s lido com fgets",nome);
    //operações com strings
    //int tamanho = strlen(nome);
    // printf("%d", tamanho);
    
    //strcpy - copia string
    strcpy(nomecompleto,nome);
    printf("nome ", nomecompleto);
    strcat(nomecompleto," ");//concatena strings 
    strcat(nomecompleto, sobrenome);
    printf("nome completo: %s \n", nomecompleto);
    printf("tamanho %lu",strlen(nomecompleto));
    return 0;
}