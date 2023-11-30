#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>



int Dado() {
    int sorteio;
    srand(time(NULL));
    sorteio=(rand() % 6) + 1;
    return sorteio;
}

int main(){

 int retorno_dado;
 int pontos=0;
 do{
  retorno_dado=Dado();
  printf("%d",retorno_dado);

  pontos+=retorno_dado;
  printf("%d",pontos);

 }while(retorno_dado>1);


}
