#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

/*	char asterisco[2] ="*";
	char otroAsterisco[2]="*";
	int contador=1;

	while(contador<=3){
		printf ("%s \n", asterisco);
		contador++;
		strcat(asterisco, otroAsterisco);
	}
	
	int MAXIMO_TRIANGULO =5;*/
	
	int bandera = 0;
	int banderaDos = 0;
	
	while(bandera <= 10){
		while(banderaDos<bandera){
			printf("*");
			banderaDos++;
		}
	banderaDos = 0;
		printf (" \n");
		bandera++;
	}
	return 0;
}


