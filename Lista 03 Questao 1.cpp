//Quest�o 1 - Leia o nome completo de 2 pessoas e apresente o primeiro nome somente em letras mai�sculas e na
//linha seguinte, com uma tabula��o, o segundo nome em letras min�sculas, solicitando outros nomes caso o usu�rio
//deseje. Somente devem ser usadas fun��es do padr�o ANSI da linguagem C.
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
int main(){
	char out,nome1[50],nome2[50];
	int i;	
	
	do {
		
		system("cls");
		puts("Insira o primeiro nome da primeira pessoa:");
		gets(nome1);
		puts("Insira o primeiro nome da segunda pessoa:");
		gets(nome2);	
		
		for(i=0;nome1[i]!=0;i++)
		nome1[i] = toupper(nome1[i]);
		
		for(i=0;nome2[i]!=0;i++)
		nome2[i] = tolower(nome2[i]);
		
		system("cls");
		
		puts("O primeiro nome completo todo em maiusculo e o segundo nome completo todo em minusculo: ");
		puts(nome1);
		puts(nome2);
		puts("\nAperte qualquer tecla e pressione enter para continuar");
		out = getchar();
		
		system("cls");
		puts("Pressione qualquer tecla para inserir outro nome.");
		puts("Pressione 0 para sair.");
		out = getchar();
		fflush(stdin);
	} while (out != '0');

	return 0;
}
