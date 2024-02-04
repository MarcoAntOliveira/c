#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    printf("**************************\n");
    printf("*******Bem vindo**********\n");
    printf("**************************\n");
    int segundos =  time(0);
    srand(segundos);

    int numero_grande = rand()%100;
    int numero_secreto = numero_grande;
    int escolha_jogador;

   
    int tentativas = 1;
    double pontos = 1000;
    double pontos_perdidos;
    while(1)
    {
        if(escolha_jogador<0){
            printf("vc digitou um numero negativo");   
        }
        printf("tentativa %d  \n", tentativas); 
        printf("Qual a sua escolha\n");        
        scanf("%d", &escolha_jogador);
       printf("A sua escolha e: %d\n", escolha_jogador);

        int acertou = (escolha_jogador== numero_secreto);
        int maior =  (escolha_jogador >numero_secreto);
        
        if(acertou)
        {
            printf("parabens vc acertou\n\n");
            break;
        }   
        else if(maior)
        {
                printf("seu chute foi maior que o numero secreto\n");
        }
        else {
                printf("seu chute foi menor que o numero secreto\n");
            }  

        tentativas++;    
        pontos_perdidos = abs((escolha_jogador - numero_secreto )/(float)2);
        /*
        if(pontos_perdidos < 0){
            pontos_perdidos = pontos_perdidos * -1;
        }
        */
        pontos = pontos - pontos_perdidos; 
    }
    printf("vc acertou na %d tentativas\n", tentativas);
    printf("Total de pontos: %.1f\n", pontos);
    return 0;
}