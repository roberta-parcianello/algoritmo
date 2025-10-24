#include <stdio.h>
#include <string.h>
//Contar Vogais: Escreva um programa que 
//conte quantas vogais existem em uma palavra.
int main() {
    char palavra[10];
    printf("Informe uma palavra\n");
    scanf("%s",palavra);//pega até o espaço
    int tamanho = strlen(palavra);
    int contador = 0;
    for(int i=0;i<tamanho;i++){
        char letra = palavra[i];
        if (letra=='a' || letra=='e'||letra=='i'||letra=='o'||letra=='u' ){
            contador++;
        }
    }
    printf("%d vogais",contador);
    return 0;
}