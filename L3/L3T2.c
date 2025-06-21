#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXPITUUS 30

int lueTiedosto(char *tiedostonNimi){
    FILE *Tiedosto;
    int i;
    int summa = 0;
    Tiedosto = fopen(tiedostonNimi, "r");
    
    if (Tiedosto == NULL) { 
        perror("Tiedoston avaaminen epäonnistui, lopetetaan"); 
        exit(0); 
        } 

    while(fscanf(Tiedosto, "%d", &i) == 1){
        summa = summa + i;
    }
    fclose(Tiedosto);
    printf("Tiedosto '%s' luettu, lukujen summa oli %d.\n", tiedostonNimi, summa);
    printf("\n");
    return summa;

}

void kirjoitaTiedosto(char *tiedostonNimi, int *summa){
    FILE *Tiedosto;

    Tiedosto = fopen(tiedostonNimi, "w");

    fprintf(Tiedosto, "Lukujen summa oli %d.\n", *summa); 
    printf("Tiedosto '%s' kirjoitettu.\n", tiedostonNimi);
    printf("\n");
    fclose(Tiedosto);


}


int main(void) {
    int summa;
    char luettavanTiedostonNimi[MAXPITUUS+1];
    char kirjoitettavanTiedostonNimi[MAXPITUUS+1];
    printf("Tämä ohjelma laskee tiedostossa olevien lukujen summan.\n");
    
    printf("Anna luettavan tiedoston nimi: ");
    fgets(luettavanTiedostonNimi, sizeof(luettavanTiedostonNimi), stdin);

    size_t len = strlen(luettavanTiedostonNimi);
    if (len > 0 && luettavanTiedostonNimi[len - 1] == '\n') {
        luettavanTiedostonNimi[len - 1] = '\0';
    }

    summa = lueTiedosto(luettavanTiedostonNimi);

    printf("Anna kirjoitettavan tiedoston nimi: ");    
    fgets(kirjoitettavanTiedostonNimi, sizeof(kirjoitettavanTiedostonNimi), stdin);
    size_t lenK = strlen(kirjoitettavanTiedostonNimi);

    if(lenK > 0 && kirjoitettavanTiedostonNimi[lenK -1] == '\n'){
        kirjoitettavanTiedostonNimi[lenK -1] = '\0';
    }

    kirjoitaTiedosto(kirjoitettavanTiedostonNimi, &summa);
    
    printf("Kiitos ohjelman käytöstä.");
    return(0);
}