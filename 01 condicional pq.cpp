//1)Faça um programa em C que leia os valores A, B, C e imprimana tela se a soma de A + B é menor que C.
int main (){
	int valA, valB, valC;
	printf("Infome um numero:"); 
	scanf("%d",&valA);  //recebe um valor                     
	printf("Infome um segundo numero:");
	scanf("%d",&valB);  //recebe um segundo valor
	printf("Infome um terceiro numero:");
	scanf("%d",&valC);  //recebe um terceiro valor
	
	if (valA+valB < valC){  //verifica se o produto do primeiro e o segundo valor é menor que o terceiro valor informado
		printf("A soma do primeiro e do segundo numero e menor que o terceiro numero.");
	} else{
		printf("Obrigada!");
	} 
}
