#include <stdio.h>
int double_value(int value);
int double_value1(int *value);

int main(){
    int valor = 10;
    printf("%d\n", valor);
    int valor1 = double_value(valor);
    double_value1(&valor);
    printf("%d\n", valor);
    printf("%d\n", valor1);

    return 0;
}

int double_value(int value)
{
    value = value*2;
    return value;
}
int double_value1(int *value){
    *value = *value *2;
    return *value;
}


