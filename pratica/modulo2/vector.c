#include <stdio.h>
#include<stdlib.h>

int main(){
    int vet[100];
    int i = 0;
    for (i = 0; i<100; i++){
        vet[i] = 0;
    }
    
    for (i = 0; i<100; i=i+2){
        vet[i] = 1;
    }

    for (i = 0; i<100; i++){
        printf("%d ", vet[i]);
    }

    return 0;
}