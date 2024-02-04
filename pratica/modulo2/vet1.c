#include <stdio.h>
int main(){
    int vet[] = {3, 4, 5, 8, 9, 10};
    int sum_vet = 0;
    int cont = 0; 
    int media = 0;
    int maior = 0;
    for (size_t i = 0; i < 6; i++)
    {
        sum_vet +=vet[i];
        cont+=1;
        if(vet[i] > maior){
            maior = vet[i];
        }        
    }
    printf("soma: %i\n", sum_vet);
    media = sum_vet/cont;
    printf("media: %i\n", media);
    printf("maior: %i\n", maior);
    
    return 0;
}