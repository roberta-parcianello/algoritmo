#include <stdio.h>
/*
Leia a idade de 20 pessoas e exiba quantas pessoas são maiores de idade
*/
int main()
{
    int idade;
    int contaMaiorIdade = 0;
    int cont = 1;
    printf("Conta quantas pessoas sao maior de idade \n");
    do{
        printf("idade: ");
        scanf("%d",&idade);
        if (idade>=18){
            contaMaiorIdade++;
        }
        cont++;
    }while(cont<=5);
    printf("%d pessoas maiores de idade", contaMaiorIdade);
    return 0;
}
