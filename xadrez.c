#include <stdio.h>

int main(){

int torre;
int bispo = 1;
int rainha = 1;

//SIMULAÇÃO MOVIMENTO TORRE 
//FUNÇÃO FOR
printf("Movimento da Torre:\n");
    for (torre = 0; torre < 5; torre++) 
    {
      printf("Direita\n");
    }    

//SIMULAÇÃO MOVIMENTO TORRE 
//FUNÇÃO WHILE
printf("**movimento bispo** \n");

while (bispo <= 5)
{
     printf("cima, direita \n");

    bispo++;
}

//SIMULAÇÃO MOVIMENTO TORRE 
//FUNÇÃO DO WHILE
printf("**movimento rainha** \n");

do
{
    printf("esquerda \n");
    rainha++;
} while (rainha <= 8);



return 0;
}