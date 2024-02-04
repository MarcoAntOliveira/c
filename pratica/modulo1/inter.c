#include <stdio.h>

int main(){
    int a = 0;
    int b = 0;
    int i = 0;
    scanf("%i%i", &a, &b);
    if (a < b){
        for(i = a; i <= b; i++){
            printf("%i ", i);
        }
        
    } else if (a > b) {
        for(i = b; i <= a; i++){
            printf("%i ", i);
        }
       
    } else{
        printf("a e b são iguais %i", a);
    }

    return 0;
}