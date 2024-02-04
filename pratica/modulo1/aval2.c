#include<stdio.h>
int main(){
    int flag  = 0;
    int sum = 0;
    int cont = 0;
    while(flag != -1){
        scanf("%i\n", &flag);
        sum +=flag;
        cont +=1; 
        printf(" valor passado:%i\n", flag);
    }
    float media = sum/cont;
    printf("este é o valor da media %.2f", media);

    return 0;
}
