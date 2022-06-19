#include <stdio.h>
#include <stdlib.h>

int main(){
	int A[4], i, nota;
	float media, soma;
	
	for(int i = 1; i < 5; i++){
	    printf("Insira a %d nota do aluno: \n", i);
	    scanf("%d", &A[i]);
    }
    printf("A status desse aluno e\n\n");
    soma = A[1] + A[2] + A[3] + A[4];
    media = soma/4;
    printf("Nota %.1f.\n", media);
    if(media <= 3){
    	printf("Aluno reprovado.");
	}else if(media > 3 && media < 7){
		printf("Aluno em recuperacao");
	}else if(media >= 7 ){
		printf("Aluno aprovado");
	}
}
