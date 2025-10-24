#include <stdio.h>
#include <string.h>


int main() {
    printf("Exemplos de String!\n");
    char cliente[20] = "Fulano";
    char outro[20];
    printf("Nome Cliente: ");
    scanf("%s",&cliente);
    printf("Cliente lido com scanf: %s \n",cliente);

    int c;
    while ((c = getchar()) != '\n' && c != EOF); // limpa o buffer
    
    printf("Nome Cliente: ");
    fgets(outro,20,stdin);
    printf("Cliente lido com gets: %s",outro);
    return 0;
}