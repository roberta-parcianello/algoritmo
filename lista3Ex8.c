#include <stdio.h>
/*
Elabore um algoritmo que calcule o que deve ser pago por um produto, considerando o 
preço normal de etiqueta e a escolha da condição de pagamento. Utilize os códigos da 
tabela a seguir para ler qual a condição de pagamento
escolhida e efetuar o cálculo adequado.
Código Condição de pagamento
a) À vista em dinheiro ou cheque, recebe 10% de desconto
b) À vista no cartão de crédito, recebe 15% de desconto
c) Em duas vezes, preço normal de etiqueta sem juros
d) Em duas vezes, preço normal de etiqueta mais juros de 10% 

*/
int main() {
    float preco, precoFinal;
    char condicaoPagamento;

    printf("Informe o valor a ser pago: R$ ");
    scanf("%f", &preco);
    printf("Escolha a condicao de pagamento: \n");
    printf("a - a vista, cheque ou dinheiro (10%% de desconto) \n ");
    printf("b - a vista no cartao de credito, (15%% de desconto) \n");
    printf("c - Em duas vezes com a primeira parcela a vista, preço normal de etiqueta sem juros \n");
    printf("d - Em duas vezes (30 e 60 dias)  preço normal de etiqueta mais juros de 10%% \n");
    scanf(" %c",&condicaoPagamento);
   
    if (condicaoPagamento=='a'){
        precoFinal = preco - (preco * 0.10);
    }else{
        if(condicaoPagamento=='b'){
            precoFinal = preco - (preco * 0.15);
        }else{
            if(condicaoPagamento=='d'){
                precoFinal = preco + (preco * 0.10);
            }else{
                if(condicaoPagamento=='c'){
                    precoFinal=preco;
                }else{
                    printf("opcao invalida \n");
                    return 0;
                }
            }
        }
    }
    printf(" o valor a ser pago sera R$%.2f", precoFinal);

    return 0;
}