#include <stdio.h>
#include <string.h>

int main(void){

    char merkkijono[50];
    char cMerkki;
    
    int merkkijononPituusSumma = 0;
    printf("Anna merkki: ");
    scanf("%c", &cMerkki);
    printf("Merkki '%c' on ASCII-taulukon mukaan lukuna %d.\n", cMerkki, cMerkki);
    getchar();
     
    printf("Anna merkkijono: ");
    fgets(merkkijono, 50, stdin);
    int len = strlen(merkkijono);
    if (len > 0 && merkkijono[len - 1] == '\n') {
        merkkijono[len - 1] = '\0';
    }
    

    for(int i = 0; i <= strlen(merkkijono)-1; i++){
        merkkijononPituusSumma += merkkijono[i];
    }

    printf("Merkkijonon '%s' merkkien summa on %d.", merkkijono, merkkijononPituusSumma);


    return(0);
}