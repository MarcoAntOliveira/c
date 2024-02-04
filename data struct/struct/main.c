#include "struct.h"
#include <stdio.h>
#include<stdlib.h>

int main(){
    //char l = ' ';
    //int i = 0;
    Pessoa pessoa;
   pessoa = lerPessoa();
   pessoa.sexo = 'm';
   /*pessoa.idade = 26;
   while (l!='\n'){
    scanf("%c", &l);
    pessoa.nome[i] = l;
    i += 1;
   }*/

    imprimirPessoa(pessoa);
    
    return 0;
}