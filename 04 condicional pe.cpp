//4) Fa�a um programa que leia dois valores inteiros A e B se os valores forem iguais dever� se somar os dois, 
//caso contr�rio multiplique A por B. 
//Ao final de qualquer um dos c�lculos deve-se atribuir o resultado para uma vari�vel C e mostrar seu conte�do na tela.
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
