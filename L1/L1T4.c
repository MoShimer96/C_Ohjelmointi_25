#include <stdio.h>
#include <string.h>

int main(void){
	char merkki;
	char merkkijono[21];

	printf("Anna merkki: ");
	scanf("%c", &merkki);
	getchar();
	printf("Annoit merkin '%c'.\n", merkki);

	printf("Anna korkeintaan 20 merkkiä pitkä merkkijono: ");
	fgets(merkkijono, 20, stdin);
	merkkijono[strlen(merkkijono)-1] = '\0';
	printf("Annoit merkkijono '%s'.", merkkijono);

	return(0);
}

