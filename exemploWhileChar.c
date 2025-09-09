#include <stdio.h>

int main()
{
    /* apresentar a tabuada do 5 */
    int n =0;
    int valor;
    printf("Informe qual tabuada: ");
    scanf("%d",&valor);

    printf("Apresentando a Tabuada do %d \n", valor);

    while (n<=10)
    {
        printf("%d * %d = %d \n",valor, n,valor*n);
        n++;
        
    }
    return 0;
}
