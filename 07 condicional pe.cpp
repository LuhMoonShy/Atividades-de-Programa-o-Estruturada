//7)Fa�a um programa que leia uma vari�vel e some 5 
//caso ela seja par e 8 caso ela seja �mpar, imprimir o resultado dessa opera��o.
#include <stdio.h>
int main()
{
	int num1,res;
  
	printf ("Informe um numero:\n");
	scanf ("%d", &num1); //recebe um numero
  
	res = num1 % 2; //calculo necessario para identificar como par ou impar
  
	if (res==0){ //condicao
	printf("\nO numero inserido e par, e somando 5 fica %d!",num1+5);
	}else 
	printf("\nO numero inserido e impar, e somando 8 fica %d!",num1+8);

return(0);
}
