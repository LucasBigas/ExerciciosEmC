#include <stdio.h>
#include <stdlib.h>
int main(){
    float num1,num2;
    printf("\nDigite o numero 1 aqui: ");
    scanf("%f",&num1);
    printf("\nDigite o numero 2 aqui: ");
    scanf("%f",&num2);

    printf("\nO numero 1 e: %2.f",num1);
    printf("\nO numero 2 e: %2.f\n",num2);

    system("pause");
    return(0);
}