#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 /*int main(){

 int opcao;

 switch(opcao){

 case 1:{

}
}
}*/


// Fun��o para gerar um n�mero aleat�rio entre 1 e 6 (um lan�amento de dado)
int rolarDado() {
    return rand() % 6 + 1;
}

// Fun��o principal do jogo
int main() {
    int pontuacaoAtual = 0;
    int pontuacaoTotal = 0;
    char escolha;

    // Inicializar a semente para a fun��o rand()
    srand(time(NULL));

    printf("Bem-vindo ao jogo do porco!\n");

    do {
        int resultadoDado = rolarDado();

        printf("\nVoc� rolou um %d\n", resultadoDado);

        if (resultadoDado == 1) {
            printf("Voc� perdeu a pontua��o atual.\n");
            pontuacaoAtual = 0;
            break;
        } else {
            pontuacaoAtual += resultadoDado;
            printf("Pontua��o atual nesta rodada: %d\n", pontuacaoAtual);
        }

        printf("Deseja rolar novamente? (s/n): ");
        scanf(" %c", &escolha);

    } while (escolha == 's' || escolha == 'S');

    pontuacaoTotal += pontuacaoAtual;

    printf("\nPontua��o total: %d\n", pontuacaoTotal);
    printf("Obrigado por jogar!\n");

    return 0;
}
