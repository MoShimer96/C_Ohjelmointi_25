#include <stdio.h>
#define ALKU  3
#define LOPPU  10

int main(void){

    int luku;

    printf("Anna kokonaisluku väliltä 3 - 10: ");
    scanf("%d", &luku);

    printf("\n");
    if(luku > LOPPU || luku < ALKU){
        printf("Antamasi luku ei ole määritellyllä välillä.");
    } else{
        for(int i = 1; i <= luku; i++){
            for(int j = 1; j <= luku; j++){
                printf("*");
            }
            printf("\n");
        }
    }

    return(0);
}