#include <stdio.h>

int main()
{
    char op = 's';
    printf("Exemplo de Estrutura de Repeticao sem contador");

    while (op == 's')
    {
        printf("Boa Noite!!");
        printf("Executar mais uma vez?(s/n)");
        scanf("%s",&op);
    }
    return 0;
}
