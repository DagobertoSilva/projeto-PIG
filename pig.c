#include <stdio.h>
#include <stdio.h>
#include <string.h>

// Definição da struct
struct Players{
    char nome[50];
    int pontuacao;
};

typedef struct Players Player;

int main() {
    // Criando um vetor de structs
    Player jogador[2];
    int opcao;
    FILE *file;


    printf("O que deseja fazer: \n1-Novo jogo\n2-Ver Ranking");
    scanf("%d", &opcao);
    fflush(stdin);
    switch(opcao){
      case 1:{
    // se o jogador ja existir entao so mexo na pontuação dele
    // se nao eu salvo o nome dele no ranking
//
    printf("Qual o nome do jogador1: ");
    gets(jogador[0].nome);
    fflush(stdin);
    file = fopen("RANKING.txt","a");
    fprintf(file,"\n");
    fprintf(file,jogador[0].nome);
    fclose(file);

    //verificar se o nome esta no arquivos de nomes

//    printf("Qual o nome do jogador2: ");
//    gets(jogador[1].nome);
//    //verificar se o nome esta no arquivos de nomes
//    fflush(stdin);
      }break;
      case 2:{
          char nome[13] = "Dagoberto";
//        ver o ranking
file = fopen("RANKING.txt","r");
    char frase[100];
    while(fgets(frase,100,file) != NULL){
        if(strcmp(frase,nome)==0){
            printf("tem esse nome");
        }
//        else{
//             printf("tem nao ohhh esse nome");
//        }
    }
    fclose(file);
    }break;

//}
//    //Cadastrando o novo jogador
//    printf("Qual o nome do jogador: ");
//    scanf("");
//    // Preenchendo os dados
//    for (int i = 0; i < 2; i++) {
//        printf("Informe o nome da pessoa %d: ", i + 1);
//        scanf("%s", jogador[i].nome);
   }
    return 0;
}
