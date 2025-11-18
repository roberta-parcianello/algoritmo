#include <stdio.h>
#include <string.h>
FILE *arquivo;
typedef struct 
{
    int ID;
    char nome[50];
    int idade;
}Pessoa;
void inserir(){
    arquivo = fopen("pessoas.csv","a");
    Pessoa p;
    printf("Digite os dados da pessoa \n");
    printf("ID: ");
    scanf("%d",&p.ID);
    printf("Digite o nome  \n");
    getchar();//limpa o buffer
    
    //scanf("%s",&p.nome);
    fgets(p.nome, sizeof(p.nome),stdin);
    // remove o \n do final do nome (inserido pelo fgets)
    size_t len = strlen(p.nome);
    if (len > 0 && p.nome[len - 1] == '\n') {
        p.nome[len - 1] = '\0';
    }

    printf("Digite a idade \n");
    scanf("%d", &p.idade);
    printf("Dados registrados \n");
    printf("ID:%d  ", p.ID);
    printf("NOME:%s  ", p.nome);
    printf("Idade: %d  ", p.idade);
    fprintf(arquivo, "%d;%s;%d",p.ID,p.nome,p.idade);
    fclose(arquivo);
    printf("registro inserido com sucesso");

}

void listar(){
    arquivo = fopen("pessoas.csv","r");
    Pessoa p;
    printf("------Listagem de Pessoas-----\n");
    while (fscanf(arquivo, "%d;%49[^;];%d\n", &p.ID, p.nome, &p.idade) == 3) {
    
        printf("ID: %d \n",p.ID);
        printf("Nome: %s\n",p.nome);
        printf("Idade: %d\n",p.idade);
        printf("--------------------\n");
    }
    
    fclose(arquivo);
}

int main() {
    int opcao;
    do {
        printf("\n=== MENU ===\n");
        printf("1 - Inserir\n");
        printf("2 - Listar\n");
        printf("3 - Alterar\n");
        printf("4 - Deletar\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: inserir(); break;
            case 2: listar(); break;
         //   case 3: alterar(); break;
            //case 4: deletar(); break;
            case 0: printf("Saindo...\n"); break;
            default: printf("Opção inválida!\n");
        }
    } while (opcao != 0);
    return 0;
}

