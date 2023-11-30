#include<stdio.h>
#include<stdlib.h>
#include<string.h>


 void informe_jogador();
 void informe_jogador(){
 char jogador[50];
 printf("Informe o nome do jogador:\n");
 fgets(jogador,50,stdin);//assim que o nome for informado, enviar pro arquivo
 //puts(jogador);
}

int Dado() {
    int sorteio;
    srand(time(NULL));
    sorteio=(rand() % 6) + 1;
    return sorteio;
}
 int jogo(int);
 int jogo(int jogador){
 int retorno_dado;
  retorno_dado=Dado();
  printf("%d",retorno_dado);

  return retorno_dado+jogador;
}

 void menu();
 void menu(){
 int opcao;
 int escolha_jogo;
 int retorno_dado=0;


 printf("\t1- Iniciar novo jogo\n");
 printf("\t2- Ver ranking\n");
 scanf("%d",&opcao);
 fflush(stdin);
 switch(opcao){
 case 1:{
  informe_jogador();
  printf("_O jogo ira comceçar:\n");
  printf("1- Rolar o dado\n");
  printf("2- Passar a vez\n");
  scanf("%d",&escolha_jogo);
  fflush(stdin);
  switch(escolha_jogo){
  case 1:{
  int pontos_jogador=0;
  pontos_jogador=jogo(pontos_jogador);



  }



  }

 }



}


}

 int main(){

 printf("\t--Bem vindo ao jogo pig--\n");
 menu();




}



