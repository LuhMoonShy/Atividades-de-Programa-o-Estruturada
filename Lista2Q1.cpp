#include <stdio.h>
#include <stdlib.h>

int main () {
	char nome[50][4], ch;
	int idades[4], i, u[2], j;
	
	for(i = 0; i < 4; i++) {
		printf("Digite o %d nome: ", i+1);
		scanf("%c", &nome[50][i]);
		ch = getchar();
		while ((getchar()) != '\n');
		printf("Digite a %d idade: ", i+1);
		scanf("%d", &idades[i]);
		system("cls");
		ch = getchar();
		printf("Pressione enter");
		while ((getchar()) != '\n');
	}
	
	for(j = 0; j < 4; j++) {
		u[1] = 0;
		u[2] = 0;
		for(i = 0; i < 4; i++) {
			u[1] = idades[i];
			if(idades[i] < idades[i+1]) {
				u[2] = i;
				u[1] = idades[i];
			}
		}
		idades[u[2]] = 0;
		printf("%f tem %d anos.\n", nome[50][u[2]], idades[u[1]]);
	}
	
	return 0;
}
