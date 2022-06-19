//9) O IMC – Indice de Massa Corporal é um critério da Organização
//Mundial de Saúde para dar uma indicação sobre a condição de
//peso de uma pessoa adulta. A fórmula é IMC = peso / ( altura *
//altura). Elabore um programa que leia o peso e a altura de um adulto e mostre sua condição de acordo com a tabela abaixo.
//IMC em adultos Condição
//Abaixo de 18,5 Abaixo do peso
//Entre 18,5 e 25 Peso normal
//Entre 25 e 30 Acima do peso
//Acima de 30 obeso
#include <stdio.h>
int main()
{
	double peso,altura,imc;  
  
	printf ("Informe seu peso(em kg):\n");
	scanf ("%lf",&peso); //recebe peso
	printf("Informe sua altura(em metros):\n");
	scanf("%lf",&altura);  //recebe altura
  
	imc==peso/(altura*altura); //calcula o imc
  
	if (imc<18.5){
		printf("\nSeu IMC e: %.2lf.\nVoce esta : Abaixo do Peso!",imc);
	}else if (imc>=18.5&&imc<25){
		printf("\nSeu IMC e: %.2lf.\nVoce esta : Peso Normal!",imc);
	}else if (imc>=25&&imc<30){                                                  // prints qu einformam o significado 
		printf("\nSeu IMC e: %.2lf.\nVoce esta : Acima do Peso!",imc);          // do valor do imc calculado 
	}else if (imc>=30){
		printf("\nSeu IMC e: %.2lf.\nVoce esta : Obeso!",imc);
	}
return(0);
}
