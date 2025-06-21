#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void kirjoitaTiedostoon(char *nimi, int aLuku, int bLuku, int tulos){

    FILE *Tiedosto;
    Tiedosto = fopen(nimi, "a");

    if(Tiedosto == NULL){
        perror("Tiedoston avaaminen epäonnistui, lopetetaan"); 
        exit(0); 
    }
    fprintf(Tiedosto, "%d+%d=%d\n", aLuku, bLuku, tulos);
    fclose(Tiedosto);
}



void lisaaLukuu(char *tiedostonNimi, int *aLuku){
    int tulos;
    int bLuku;
    printf("\nAnna lukuun lisättävä kokonaisluku: ");
    scanf("%d", &bLuku);

    tulos = *aLuku + bLuku;
    printf("%d+%d=%d\n", *aLuku, bLuku, tulos);

    kirjoitaTiedostoon(tiedostonNimi, *aLuku, bLuku, tulos);
    
    *aLuku = tulos;
}

void lueTiedosto(char *tiedostonNimi){
    printf("\nTiedostossa oleva laskuhistoria:\n");

    FILE *Tiedosto;
    char ch;
    Tiedosto = fopen(tiedostonNimi, "r");

    if (Tiedosto == NULL) { 
    perror("\nTiedoston avaaminen epäonnistui, lopetetaan"); 
    exit(0); 
    } 

    char buff[100];
    while(fgets(buff, sizeof(buff), Tiedosto) != NULL){
    printf("%s", buff);
    }
    fclose(Tiedosto);
    printf("Tiedosto '%s' luettu ja tulostettu.\n", tiedostonNimi);


}

int main(void){
    int valinta;
    int luku = 0;
    bool lopeta = false;
    char tiedostonNimi[31];
    printf("Anna kokonaisluku: ");
    scanf("%d", &luku);
    while (getchar() != '\n'); 
    printf("Anna kirjoitettavan tiedoston nimi: ");
    
    fgets(tiedostonNimi, sizeof(tiedostonNimi), stdin);
    size_t len = strlen(tiedostonNimi);
    if(len > 0 && tiedostonNimi[len -1] == '\n'){
        tiedostonNimi[len -1] = '\0';
    }



    while(!lopeta){
        printf("\nValitse haluamasi toiminto:\n");
        printf("1) Lisää lukuun\n");
        printf("2) Tulosta tulokset\n");
        printf("0) Lopeta\n");
        printf("Anna valintasi: ");
        scanf("%d", &valinta);

        if(valinta == 0){
            printf("\nLopetetaan.\n");
            lopeta = true;

        } else if(valinta == 1){
            lisaaLukuu(tiedostonNimi, &luku);
        } else if(valinta == 2){
            lueTiedosto(tiedostonNimi);
        } else{
            printf("Tuntematon valinta, yritä uudestaan.\n");
        }

    }

    printf("\nKiitos ohjelman käytöstä.");

    return(0);
}