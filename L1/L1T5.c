#include <stdio.h>
#include <string.h>

int main(void){
	char nimi[30];
    char rotu[30];
    int ika;
    float paino;

    printf("Anna lemmikin nimi: ");
    fgets(nimi, 30, stdin);
    nimi[strlen(nimi)-1] = '\0';
    
    printf("Anna lemmikin rotu: ");
    fgets(rotu, 30, stdin);
    rotu[strlen(rotu)-1] = '\0';
   
    
    printf("Anna lemmikin ikä: ");
    scanf("%d", &ika);
    
    printf("Anna lemmikin paino: ");
    scanf("%f", &paino);

    printf("Lemmikin nimi on %s ja rotu on %s.\n", nimi, rotu);
 
    printf("Sen ikä on %d vuotta ja paino %.1f kg.", ika, paino);


	return(0);
}