//6)Escreva um programa que l� dois valores booleanos (l�gicos) e ent�o determina se ambos s�o verdadeiros ou falsos.
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
