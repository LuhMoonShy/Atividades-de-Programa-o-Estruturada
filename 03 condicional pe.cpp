//3) Faça um programa para receber um número qualquer e informar na tela se é par ou ímpar.
#include <stdio.h>
int main()
{
	int num1,res;
  
	printf ("Informe um numero:\n");
	scanf ("%d", &num1); //recebe um numero qualquer 
  
	res = num1 % 2; //calculo para identificação do numero par ou impar
  
	if (res==0){ //condicao para identificar se é par
	printf("\nO numero inserido e par!");
	}else 
	printf("\nO numero inserido e impar!");

return(0);
}
