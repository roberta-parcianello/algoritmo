#include <stdio.h>
//solicitar o preco do video game
//solicitar o total que o usuario tem em $
//informar se ele consegue comprar o game
int main()
{
    float preco, dinheiro;

    printf("preco do video game: R$");
    scanf("%f",&preco);
    printf("quantos reais você possui? R$");
    scanf("%f",&dinheiro);

    if(dinheiro >= preco){
        printf("uhuuuu!!! Voce consegue comprar o video game!!!");
    }
    
}
