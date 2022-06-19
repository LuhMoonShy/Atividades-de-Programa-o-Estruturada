//6)Escreva um programa que lê dois valores booleanos (lógicos) e então determina se ambos são verdadeiros ou falsos.
#include <stdio.h>
int main()
{
	int numA,numB;
  
	printf ("Informe um numero:\n");
	scanf ("%d", &numA); //recebe um numero
	printf ("Informe outro numero:\n");
	scanf ("%d", &numB); //recebe outro numero
	
	if (numA==0||numB==0){ //condicao
	printf("\nFALSO!");
	}else 
	printf("\nVERDADEIRO");

return(0);
}
