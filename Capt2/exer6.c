#include <stdio.h>
#include <stdlib.h>
int main(){
	float triangulo,base,altura;
	
	printf("\nDigite o valor da base: ");
	scanf("%f",&base);
	printf("\nDigite a altura: ");
	scanf("%f",&altura);
	
	triangulo = (base * altura) /2;
	printf("\nA area do trinagulo e de: %.2f\n",triangulo);
	system("pause");
	return(0);
	
}
