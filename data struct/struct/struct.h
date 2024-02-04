#ifndef STRUCT_H
#define STRUCT_H

typedef struct
{
   int dia, mes, ano;
}DataNas;

typedef struct{
    DataNas dataNas;
    int idade;
    char sexo;
    char nome[100];

}Pessoa;

void imprimirPessoa(Pessoa p);
Pessoa lerPessoa();
#endif