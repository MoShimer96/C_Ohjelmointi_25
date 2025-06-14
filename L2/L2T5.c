#include <stdio.h>
#include <stdbool.h> 

int main(void){
    int kokonaisluku;
    printf("Anna kokonaisluku: ");
    scanf("%d", &kokonaisluku);
    bool value = false;

    while(!value){
        int input;
        int luku;
        printf("\nValitse haluamasi toiminto:");
        printf("\n1) Lisää lukuun");
        printf("\n2) Vähennä luvusta");
        printf("\n0) Lopeta");
        printf("\nAnna valintasi: ");
        scanf("%d", &input);


        if(input == 1){
            printf("Anna lukuun lisättävä kokonaisluku: ");
            scanf("%d", &luku);
            kokonaisluku += luku;
            printf("Luku on nyt %d.\n", kokonaisluku);
        } else if(input == 2){
            printf("Anna luvusta vähennettävä kokonaisluku: ");
            scanf("%d", &luku);
            kokonaisluku -= luku;
            printf("Luku on nyt %d.\n", kokonaisluku);
        } else if(input == 0){
            printf("Lopetetaan.\n");
            value = true;
        } else{
            printf("Tuntematon valinta, yritä uudestaan.\n");
        }

    }
    printf("\nKiitos ohjelman käytöstä.");
    return(0);
}