//4) Faça um programa que leia dois valores inteiros A e B se os valores forem iguais deverá se somar os dois, 
//caso contrário multiplique A por B. 
//Ao final de qualquer um dos cálculos deve-se atribuir o resultado para uma variável C e mostrar seu conteúdo na tela.
#include <stdio.h>
int main()
{
	int numA,numB,numC;
  
	printf ("Informe um numero:\n");
	scanf ("%d", &numA); //recebe um numero
	printf ("Informe outro numero:\n");
	scanf ("%d", &numB); //recebe outro numero
	
	numC=numA*numB; //calculo requirido
	
	if (numA==numB){ //condicao
	printf("\nO novo valor e: %d!",numA+numB);
	}else 
	printf("\nO novo valor e %d!",numC);

return(0);
}
