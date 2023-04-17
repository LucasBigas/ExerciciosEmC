#include <stdio.h>
#include <stdlib.h>
int main(){
    int num,suc,ant;
    printf("\nDigite o numero aqui: ");
    scanf("%d",&num);

    suc = num+1;
    ant = num-1;

    printf("\nO sucessor e de: %d",suc);
    printf("\nO antecessor e de; %d\n",ant);
    system("pause");
    return(0);
}