//2)Faça um programa que leia o nome, o sexo e o estado civil de uma pessoa. 
//Caso sexo seja “F” e estado civil seja “CASADA”,solicitar o tempo de casada (anos).
#include<stdio.h>
#include<stdlib.h>
int main (){
	char nome[100]; 
	char sexo = 'F'|| 'M'; 
	char est_civil = 'SOLTEIRA' || 'CASADA'; 
	int resposta;
	
	printf("Informe o seu nome:");
	gets(nome); //recebe um conjunto de caracteres
	getchar(); //limpa o cash
	system("cls"); //limpa a tela
	printf("Informe o seu sexo (utilizando 'F' ou 'M'):");
	scanf("%c",&sexo); //recebe o caractere de sexo
	getchar(); //limpa cash
	system("cls"); // limpa a tela
	printf("Informe seu estado civil \n (| S = SOLTEIRA | C = CASADA |):");
	scanf("%c",&est_civil); //recebe o caractere de casada ou solteira
	getchar(); //limpa o cash
	system("cls"); //limpa a tela
	
	if (sexo=='F' && est_civil=='C'){ //condiciona 
		printf("A quantos anos voce e casada?");
		scanf("%d",&resposta); //recebe a idade de casamento
		system ("cls"); //limpa a tela
		printf("Voce esta casada a %d anos, parabens %s!",resposta,nome);
	} else {
		printf("Obrigada!");
	}
}
