#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
srand( (unsigned)time(NULL) );
int matriz_facil[3][3];
int matriz_media[5][5];
int matriz_dificil[10][10];
int i, j, escolhido, index1, index2,seunumero, opcao;

printf("Escolha sua dificuldade:\n0 - Facil (9 numeros)\n1 - Medio (25 numeros)\n2 - Dificil (100 numeros)\n");
scanf("%d", &opcao);

switch(opcao) {

case 0:
for(i=0; i<3; i++) {
	for (j=0; j<3;j++) {
		matriz_facil[i][j]= rand() % 10;
	}
}
for(i=0; i<3; i++) {
	for (j=0; j<3;j++) {
		printf("%d ", matriz_facil[i][j]);
		if (j==2){
			printf("\n");
		}
	}
}
printf("Escolha seu numero na matriz acima: \n");
scanf("%d", &seunumero);

index1 = rand() % 3;
index2 = rand() % 3;
escolhido = matriz_facil[index1][index2];

if (seunumero == escolhido) {
	printf("Parabens! Voce acertou o numero na matriz!");
} else {
	printf("o numero escolhido foi %d, sinto muito!", escolhido);
}
break;

case 1:
for(i=0; i<5; i++) {
	for (j=0; j<5;j++) {
		matriz_media[i][j]= rand() % 10;
	}
}
for(i=0; i<5; i++) {
	for (j=0; j<5;j++) {
		printf("%d ", matriz_media[i][j]);
		if (j==4){
			printf("\n");
		}
	}
}
printf("Escolha seu numero na matriz acima: \n");
scanf("%d", &seunumero);

index1 = rand() % 5;
index2 = rand() % 5;
escolhido = matriz_media[index1][index2];

if (seunumero == escolhido) {
	printf("Parabens! Voce acertou o numero na matriz!");
} else {
	printf("o numero escolhido foi %d, sinto muito!", escolhido);
}
break;

case 2:
for(i=0; i<10; i++) {
	for (j=0; j<10;j++) {
		matriz_dificil[i][j]= rand() % 10;
	}
}
for(i=0; i<10; i++) {
	for (j=0; j<10;j++) {
		printf("%d ", matriz_dificil[i][j]);
		if (j==9){
			printf("\n");
		}
	}
}
printf("Escolha seu numero na matriz acima: \n");
scanf("%d", &seunumero);

index1 = rand() % 10;
index2 = rand() % 10;
escolhido = matriz_dificil[index1][index2];

if (seunumero == escolhido) {
	printf("Parabens! Voce acertou o numero na matriz!");
} else {
	printf("o numero escolhido foi %d, sinto muito!", escolhido);
}
break;

	
}
	return 0;
}
