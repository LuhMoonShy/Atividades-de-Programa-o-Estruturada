//8)Escreva um programa que leia três valores inteiros e diferentes e mostre-os em ordem crescente.
#include <stdio.h>

int main() 
{
  int n1, n2, n3;      
  
  printf("Digite um numero:");
  scanf("%d", &n1); //recebe um numero
  printf("Digite outro numero:");
  scanf("%d",&n2);  //recebe outro numero
  printf("Digite outro numero:");
  scanf("%d",&n3);  //recebe outro numero
     
	if (n1 <= n2 && n2 <= n3){
		printf("A ordem crescente: %d %d %d\n", n1, n2, n3);
	}else if (n1 <= n3 && n3 <= n2){
    	printf("A ordem crescente: %d %d %d\n", n1, n3, n2);
    }else if (n2 <= n1 && n1 <= n3){
    	printf("A ordem crescente: %d %d %d\n", n2, n1, n3);
    }else if (n2 <= n3 && n3 <= n1){
    	printf("A ordem crescente: %d %d %d\n", n2, n3, n1);           //calculos necessarios para ordenar os numeros 
    }else if (n3 <= n1 && n1 <= n2){                                   //em ordem crescente
    	printf("A ordem crescente: %d %d %d\n", n3, n1, n2);
    }else{
    	printf("A ordem crescente: %d %d %d\n", n3, n2, n1);
    }
return 0;
}
