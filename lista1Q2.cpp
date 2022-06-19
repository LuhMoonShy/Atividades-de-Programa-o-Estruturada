#include <stdio.h>
#include <stdlib.h> 
#include<conio.h>
int main (void){
int tamVetor,i, vetor[tamVetor]; 

	 printf("\n Informe o tamanho do vetor desejado:\n");
     scanf("%d", &tamVetor);
   for(i=0; i<tamVetor; i++){
        printf("\n Informe o %d valor do vetor\n", i+1);
        scanf("%d", &vetor[i]);
   }
    printf("\nOs valores do vetor requerido sao:\n");
    for (i=0; i<tamVetor; i++) {
    printf("%d", vetor[i]);
	}
	getch();
    }
}
