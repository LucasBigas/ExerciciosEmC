#include <stdio.h>
#include <stdlib.h>

int main(){
    float num,terco;

    printf("\nDigite o numero aqui: ");
    scanf("%f",&num);

    terco = num/3;

    printf("\nO terco e de: %.2f\n",terco);
    system("pause");
    return(0);
}
