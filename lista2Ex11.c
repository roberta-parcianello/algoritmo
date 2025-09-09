#include <stdio.h>

int main() {
    int diasSemAcidente;
    int anos, meses, dias;
    printf("Informe quantos dias sem acidentes:\n");
    scanf("%d",&diasSemAcidente);
    anos = diasSemAcidente / 365;
    dias = diasSemAcidente % 365;

    meses = dias / 30;
    dias = dias % 30;

    printf("Estamos a %d ano(s), %d mese(s) e %d dia(s) sem acidente", anos, meses, dias);


    return 0;
}