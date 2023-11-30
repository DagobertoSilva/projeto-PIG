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


// Função para gerar um número aleatório entre 1 e 6 (um lançamento de dado)
int rolarDado() {
    return rand() % 6 + 1;
}

// Função principal do jogo
int main() {
    int pontuacaoAtual = 0;
    int pontuacaoTotal = 0;
    char escolha;

    // Inicializar a semente para a função rand()
    srand(time(NULL));

    printf("Bem-vindo ao jogo do porco!\n");

    do {
        int resultadoDado = rolarDado();

        printf("\nVocê rolou um %d\n", resultadoDado);

        if (resultadoDado == 1) {
            printf("Você perdeu a pontuação atual.\n");
            pontuacaoAtual = 0;
            break;
        } else {
            pontuacaoAtual += resultadoDado;
            printf("Pontuação atual nesta rodada: %d\n", pontuacaoAtual);
        }

        printf("Deseja rolar novamente? (s/n): ");
        scanf(" %c", &escolha);

    } while (escolha == 's' || escolha == 'S');

    pontuacaoTotal += pontuacaoAtual;

    printf("\nPontuação total: %d\n", pontuacaoTotal);
    printf("Obrigado por jogar!\n");

    return 0;
}
