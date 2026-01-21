#include <stdio.h>

int main(){

int torre;
int bispo = 1;
int rainha = 1;
int cavalo;

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


 // Movimento do Cavalo (loops aninhados)
    printf("\nMovimento do Cavalo:\n");

    for (cavalo = 0; cavalo < 2; cavalo++) {
        printf("Baixo\n");
    }

    int lado = 0;
    while (lado < 1) {
        printf("Esquerda\n");
        lado++;
    }



return 0;
}