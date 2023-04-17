#include <stdio.h>
#include <stdlib.h>
int main(){
    float num1,num2,media;
    printf("\nDigite o numero 1: ");
    scanf("%f",&num1);
    printf("\nDigite o numero 2: ");
    scanf("%f",&num2);

    media = (num1+num2)/2;
    printf("\nA media %.2f\n",media);
    system("pause");
    return(0);
}