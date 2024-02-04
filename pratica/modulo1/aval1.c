#include <stdio.h>
int main(){
    int a , b, c , maior = 0;
    scanf("%i%i%i", &a, &b, &c);

    if(a > b  && a > c ){
        maior = a;
    } else if ( b > c && b > a){
        maior = b ;
    } else if( c > b && c > a){
        maior = c;
    }
    if ( maior% 2 == 0){
        printf("numero par");
    } else{
        printf("numero impar");
    }


    return 0;
}