#include "struct.h"
#include <stdio.h>
#include <stdlib.h>
#include<string.h>


void imprimirPessoa(Pessoa p){
    printf("\tNome: %s\n", p.nome);
    printf("\tIdade: %d\n", p.idade);
    printf("\tSexo: %c\n", p.sexo);
    printf("\tData Nas:%d/%d/%d\n", p.dataNas.dia, p.dataNas.mes, p.dataNas.ano);
}

Pessoa lerPessoa(){
    Pessoa p;
    printf("\n Digite seu nome\t");
    fgets(p.nome, 100, stdin);
    printf("\n Digite sua idade\t");
    scanf("%d", &p.idade);
    printf("\nDigite f ou m para o sexo\t");
    scanf("%c", &p.sexo);
    printf("\nDigte sua data de nascimento no dd mm aaaa\t");
    scanf("%d%d%d", &p.dataNas.dia, &p.dataNas.mes, &p.dataNas.ano);
    return p;
}