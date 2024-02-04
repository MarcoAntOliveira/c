#include "lista.h"
#include <stdio.h>
#include<stdlib.h>

/**
 * arquivo lista.c
 * 
 * Implemente neste arquivo as funções especificadas em lista.h.
 * Não faça modificações nas estruturas fornecidas. Você pode 
 * implementar funções auxiliares além das fornecidas, para isso,
 * coloque o cabeçário da função no arquivo .h e sua implementação 
 * aqui, no arquivo .c. Não altere assinaturas de funções, caso 
 * contrário seu código receberá nota 0,0 (zero).
 */

//Estrutura de lista
struct lista {
	tipo 		*dados;		//Vetor que armazena os dados
	int 		capacidade; //Capacidade de armazenamento da lista
 	int 		tamanho;	//Tamanho atual da lista
};

 
lista_t*	lista_cria				(int capacidade){
   
 lista_t *l = ( lista_t *) malloc ( sizeof ( lista_t ));
 if (l== NULL) return NULL;
 l -> capacidade = capacidade ; 
 
 l->dados =(tipo*) malloc(sizeof(tipo)*capacidade);
 if (l->dados== NULL) return NULL;
 l->tamanho = 0;
printf("lista criada\n");
 
 return l;
 }

void		lista_destroi			(lista_t **l){
     if (!(*l)) return ;
     if((*l)->dados != NULL)
     free((*l)->dados);
     free(*l);
     *l = NULL;
     printf("lista destruida \n ");
 }
 int 		lista_inicializada		(lista_t *l)
{
    if(l == NULL){
        return -1;
    }
    return  1; 
}
int 		lista_tamanho			(lista_t *l){
    if(!lista_inicializada(l)){
        return -1;
    }
    
    return l -> tamanho;
}
int 		lista_capacidade			(lista_t *l){

    if(!lista_inicializada(l))
    {
        return -1;
    }
    return l -> capacidade;
}

int   lista_cheia (lista_t *l){
    if(!lista_inicializada(l)){
        printf("lista não inicializada");
        return -1;
    } else if (l ->tamanho == l -> capacidade) {
        printf("lista cheia");
        return 1;
    } else {
        return 0;
    }  
}
int lista_info_cabeca  (lista_t *l, int *dado){
    if(!lista_inicializada(l)){
        printf("lista não inicializada\n");
        return -1;
    } 
    if(lista_tamanho(l) == 0){
        return 0;
    }
    if(dado == NULL){
         printf("não tem esse valor aq\n");
        return -1;
    }
    int t = l -> dados [0];
    dado[0] = t; 
    return 1;
}
int lista_info_cauda (lista_t *l, int *dado){
     if(!lista_inicializada(l)){
         printf("lista não inicializada\n");
        return -1;
    } 
    if(lista_tamanho(l) == 0){
        return 0;
    }
    if(dado == NULL){
        printf("Nao tem esse valor aq");
        return -1;
    }
    int t = l -> dados[lista_tamanho(l) - 1];
    dado[lista_tamanho(l) - 1] = t;
    return 1;
    
}
int 		lista_info_posicao 		(lista_t *l, int *dado, int pos){
     if(!lista_inicializada(l)){
         printf("lista não inicializada\n");
        return -1;
    } 
    if(lista_tamanho(l) == 0){
        return 0;
    }
    if(dado == NULL){
        return -1;
    }
    int t = l -> dados[pos];
    dado[pos] = t;
    return 1;
}
int			lista_insere_cabeca		(lista_t *l, tipo dado){
    if(lista_cheia(l)){
         printf("lista não inicializada\n");
        return -1;
    } 
    if(lista_tamanho(l) == 0){
        l -> dados[0] = dado;
        l -> tamanho++;
        return 1;
    }
    
    for (int i = 0; i < lista_tamanho(l); i++){
        l->dados[i + 1] = l->dados[i];
    }
    
    
    l -> dados[0] = dado;
    return 1;
    
}
int			lista_insere_cauda		(lista_t *l, tipo dado){
    if(!lista_inicializada(l)){
        printf("lista não inicializada\n");
        return -1;
    } 
    if(lista_tamanho(l) == 0){
        return 0;
    }
    l -> dados[lista_tamanho(l) - 1 ] = dado;
    return 1;
}

int	lista_remove_cabeca	(lista_t *l, tipo *dado){
    if(!lista_inicializada(l)){
         printf("lista não inicializada\n");
         dado[0] = -1;
        return dado[0];
    } 
    if(lista_tamanho(l) == 0){
        dado[0] = 0;
        return dado[0];
    }
    if(dado == NULL){
        return -1;
    }
    dado[0]= l ->dados[0];
    l->dados[0]= 0;
    printf("o valor removido foi %i", dado[0]);
    return dado[0];
}

int	lista_remove_cauda(lista_t *l, tipo *dado){
    if(!lista_inicializada(l)){
         printf("lista não inicializada\n");
         dado[lista_tamanho(l)- 1]= -1;
        return dado[lista_tamanho(l) - 1];
    } 
    if(lista_tamanho(l) == 0){
        dado[lista_tamanho(l) - 1];
        return dado[lista_tamanho(l) - 1];
    }
    dado[lista_tamanho(l)-1]= l ->dados[lista_tamanho(l)-1];
    l->dados[lista_tamanho(l)-1] = 0;
    return dado[lista_tamanho(l)];
}

int			lista_remove_posicao	(lista_t *l, tipo *dado, int pos){
    if(!lista_inicializada(l)){
         printf("lista não inicializada\n");
         dado[0] = -1;
        return dado[0];
    } 
    if(lista_tamanho(l) == 0){
        dado[0] = 0;
        return dado[0];
    }
    dado[pos] = l -> dados[pos];
    l->dados[pos] = 0;
    return dado[pos];
}
int 		lista_remove_primeira	(lista_t *l, tipo dado){
    if(!lista_inicializada(l)){
         printf("lista não inicializada\n");
        return -1;
    } 
    if(lista_tamanho(l) == 0){
        return 0;
    }
    if(dado == 0){
        return -1;
    }
    int pos = 0;
    for (int i = 0;i < lista_tamanho(l); i++){
        if(l -> dados[i] == dado){
            l -> dados[i] = 0;
             pos = i;
            break;
        }
    }
    return pos;
}
int 		lista_remove_todas		(lista_t *l, tipo dado){
    if(!lista_inicializada(l)){
         printf("lista não inicializada\n");
        return -1;
    } 
    int cont_rem = 0;
    for (int i = 0;i < lista_tamanho(l); i++){
        if(l -> dados[i] == dado){
            l -> dados[i] = 0;
           cont_rem++;
        }
    }
    
 return cont_rem;   
}
int 		lista_busca_info		(lista_t *l, tipo dado){
    if(!lista_inicializada(l)){
         printf("lista não inicializada\n");
        return -1;
    } 
    int tam_vet = lista_tamanho(l);
    int vet_pos[tam_vet];
    for(int k = 0; k< tam_vet; k++){
        vet_pos[k] = 0; 
    }
    for (int j = 0 ; j < lista_tamanho(l); j++){
        printf("%i", vet_pos[j]);
    }
    int cont_rem = 0;
    
    for (int i = 0;i < lista_tamanho(l); i++){
        if(l -> dados[i] == dado){
            l -> dados[i] = 0;
            vet_pos[i] = i;
            cont_rem++;
        }
    }
    if(cont_rem == 0){
        return -1;
    }
    return vet_pos[0];
}

int lista_frequencia_info	(lista_t *l, tipo dado){
    if(!lista_inicializada(l)){
         printf("lista não inicializada\n");
        return -1;
    } 
    int cont_freq = 0;
    for (int i = 0; i < lista_tamanho(l);i++){
        if(l->dados[i] == dado)
        {
        cont_freq++;
        }
    }
return cont_freq;
}
int			lista_ordenada 			(lista_t *l){
    if(!lista_inicializada(l)){
             printf("lista não inicializada\n");
            return -1;
        } 
    if(lista_tamanho(l) == 0){
        return 1;
    }
    int vet_pos = 0;
    int cont_ord = 0;
    for(int i = 0; i < lista_tamanho(l); i++){
        if (vet_pos < l -> dados[i]){
            vet_pos = l -> dados[i];
            cont_ord++;
        } else {
            return 0;
        }
    }
    if (cont_ord == lista_tamanho(l)){
        return 1;
    }
}

 
 
 
 