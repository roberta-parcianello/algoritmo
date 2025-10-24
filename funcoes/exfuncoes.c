#include <stdio.h>

//declaração de uma função
int soma(int n1, int n2){
    return n1 + n2;
}

int subtracao(int n1, int n2){
    return n1 - n2;
}

int multiplicacao(int n1, int n2){
    return n1*n2;
}

int calculadora(int n1, int n2, char op){
    switch (op)
    {
    case '+':
        return soma(n1,n2);
    case '-':
        return subtracao(n1,n2);
    case '*':
        return multiplicacao(n1,n2);
    default:
        break;
    }
}

int main() {
/*    printf("Exemplo de uso de função \n");
    int x,y;
    printf("x:");
    scanf("%d",&x);
    printf("y: ");
    scanf("%d",&y);
    int resp = soma(x,y);

    printf("%d + %d = %d \n",x,y,resp);

    printf("%d",soma(2,4)); */
    int x,y;
    char op;
    printf("x:");
    scanf("%d",&x);
    printf("y: ");
    scanf("%d",&y);
    printf("Escolha a operacao: (+ ou -): ");
    scanf(" %c",&op);
    printf("Resultado \n");
    printf("%d",calculadora(x,y,op));
    return 0;
}