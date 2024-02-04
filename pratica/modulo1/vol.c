#include <stdio.h>
#include <math.h>

int main(){
   float num1 = 0;
   float num2 = 0;
   int op = 0;
   float result = 0;
   printf("Digite dois numeros: ");
   scanf("%f" ,&num1);
   scanf("%f" ,&num2);


   printf("escolha uma operacao\n1 - soma\n2 - subtracao\n3 - multiplicacao\n");
   scanf("%i", &op);
   switch (op)
   {
        case 1:
            result = num1 + num2;
            break;
        case 2:
            result = num1 - num2;
            break;
        case 3:
            result = num1 *num2;
            break;
        default:
            break;
    }
printf("esse e o resultado da operacao %.3f", result);
    return 0;
}

