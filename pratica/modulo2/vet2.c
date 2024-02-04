#include <stdio.h>
int main(){
    int vet1[] = {1, 2, 2 , 3, 4,5,8,9,0,7};
    int vet2[] = {2, 4,5, 6,7, 8,9,10,11, 6 };
    int vet3[] = {0};
    int sum_pos = 0;
    int sum_vet = 0;
    int i = 0;
    int j = 0;
    int k = 0;

    for(i = 0; i < 10; i++)
    {
        printf("%i , %i\n", vet1[i], vet2[i]);
        sum_pos = vet1[i] + vet2[i];
        printf("%i\n", sum_pos);
        sum_vet +=sum_pos;
        printf("%i\n", sum_vet);

    }
    for (k = 0; k < 50; k++){
        if(k%2 == 0){
            vet3[k] = 0;
        }else{
            vet3[k] = 1;
        }
    }
    for (size_t j = 0; j < 50; j++)
    {
        printf("%i ", vet3[i]);
    }
    

    return 0;
}

