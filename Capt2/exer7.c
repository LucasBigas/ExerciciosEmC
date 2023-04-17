#include <stdio.h>
#include <stdlib.h>
int main(){
	float valor,desconto,newValor;
	
	printf("\nO valor e de R$: ");
	scanf("%f",&valor);
	printf("\nDigite o valor do desconto aqui R$: ");
	scanf("%f",&desconto);
	
	newValor = valor - desconto;
	printf("\nO novo valor sera de: R$ %.2f\n",newValor);
	system("pause");
	return(0);
}
