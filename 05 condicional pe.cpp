//5)Encontrar o dobro de um número caso ele seja positivo e o seu triplo caso ele seja negativo, imprimindo o resultado.
#include <stdio.h>
int main()
{
	int numA;
  
	printf ("Informe um numero:\n");
	scanf ("%d", &numA); //recebe um numero

	if (numA<0){ //condicao
	printf("\nO novo valor e: %d!",numA*3); //printa e exibe o calculo necessario
	}else 
	printf("\nO novo valor e %d!",numA*2); //printa e exibe o calculo necessario

return(0);
}
