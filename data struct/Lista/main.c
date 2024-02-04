#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


int main(){
    
    lista_t *list1;
    list1 = lista_cria(5);
    //lista_t  **list1;
    //lista_destroi( list1);
    lista_inicializada( list1);

    //printf("%i\n" ,lista_tamanho(list1));
    //printf("%i\n" ,lista_capacidade(list1));
    //printf("%i\n" ,lista_cheia(list1));
    tipo dado = 100 ;
    tipo dado2 = 9;
    lista_t *list2;
    list2 = lista_cria(4);
    lista_inicializada(list2);
    lista_insere_cabeca(list1, dado);
    //lista_insere_cabeca(list2, dado);

    printf("%i\n", lista_info_cabeca(list1, &dado));

    lista_remove_cabeca(list1, &dado);

    printf("%i\n", lista_info_cabeca(list1, &dado));

    lista_insere_cauda(list2, dado2);
    lista_insere_cauda(list1, dado2);


    printf("%i\n", lista_info_cabeca(list1, &dado));
    printf("%i\n", lista_info_cabeca(list2, &dado));
    printf("%i\n", lista_info_cauda(list2, &dado2));
    printf("%i\n", lista_info_cauda(list1, &dado2));

    //printf("%i\n" , lista_info_cabeca (list1,dado));
    //printf("%i\n" ,lista_info_cauda (list1,dado));

    // printf("%i\n" ,lista_info_cabeca (list2,dado));
    //printf("%i\n ",lista_info_cauda (list2,dado));
    int pos = 2;
    //lista_info_posicao(list1, dado,pos);
    tipo dado1;
    //lista_insere_cabeca(list1, dado1);
    //lista_insere_cauda(list1, dado1);
    //lista_remove_cabeca(list1, dado);
    //lista_remove_cauda(list1, dado);
    //lista_remove_primeira(list1, dado1);
    //printf("%i", lista_busca_info(list1, dado1));

    /*
    lista_t *compras;
    compras = lista_cria(9);
    lista_insere_cabeca(compras, 1);
    int *dado = 0;
    printf("%i\n" , lista_info_cabeca (compras,dado));
    */

    }
