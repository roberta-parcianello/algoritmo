#include <stdio.h>


int soma(int n1, int n2);
int subtracao(int n1, int n2);
int calculadora(int n1, int n2, char op);

int main() {
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

//declaração de uma função
int soma(int n1, int n2){
    return n1+n2;
}

int subtracao(int n1, int n2){
    int result = n1 - n2;
    return result;
}

int calculadora(int n1, int n2, char op){
    switch (op)
    {
    case '+':
        return soma(n1,n2);
    case '-':
        return subtracao(n1,n2);
    
    default:
        break;
    }
}