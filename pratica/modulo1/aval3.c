#include <stdio.h>
int main(){
    float altura_fatima = 1.50;
    float altura_victor = 1.20;
    int anos = 0;
    while(altura_fatima > altura_victor){
        altura_fatima+=0.4;
        altura_victor+=0.6;
        anos+=1;
    }
    printf("a altura de victor ultrapassara a da fatima em %i, quando ela estiver %.2f metros e ele %.2f metros", anos, altura_fatima, altura_victor);

    return 0;
}