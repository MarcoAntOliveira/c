#include <stdio.h>

int main(){
    int sum_three = 0;
   
    for (size_t i = 0; i <= 500; i++)
    {
        if(i % 2  != 0 && i % 3 == 0){
            sum_three+=i;
        }
    }
    printf("sum_three: %i", sum_three );

    return 0;
}