#include <stdio.h>
#include <stdlib.h>
int main(){
    int num1,num2;
    num1 = 0;
    num2 = 0;

    printf("\nDigite o numero 1: ");
    scanf("%d", &num1);
    printf("\nDigite o numero 2: ");
    scanf("%d", &num2);

    printf("\nNumero 1: %d", num1);
    printf("\nNumero 2: %d\n", num2);
    system("pause");
    return(0);

}