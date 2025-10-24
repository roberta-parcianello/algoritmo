#include <stdio.h>
//calcular a média de uma turma que tem 5 alunos
int main() {
    float nota[5], soma = 0, media = 0;
    printf("Calcula Media!\n");
    printf("Insira as notas dos 5 alunos \n");
    for(int i=0;i<5;i++){
        printf("Digite a nota do aluno %d: ",i);
        scanf("%f",&nota[i]);
        soma = soma + nota[i];
    }
    media = soma/5;

    printf("A media da turma = %.1f",media);

    return 0;
}