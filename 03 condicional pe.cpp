//3) Fa�a um programa para receber um n�mero qualquer e informar na tela se � par ou �mpar.
#include <stdio.h>
int main()
{
	int num1,res;
  
	printf ("Informe um numero:\n");
	scanf ("%d", &num1); //recebe um numero qualquer 
  
	res = num1 % 2; //calculo para identifica��o do numero par ou impar
  
	if (res==0){ //condicao para identificar se � par
	printf("\nO numero inserido e par!");
	}else 
	printf("\nO numero inserido e impar!");

return(0);
}
