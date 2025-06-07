#include <stdio.h>


int main(void){
    int kokonaisluku1;
    int kokonaisluku2;

    printf("Anna ensimmäinen kokonaisluku: ");
    scanf("%d", &kokonaisluku1);

    printf("Anna toinen kokonaisluku: ");
    scanf("%d", &kokonaisluku2);

    int laskutoimitus1 = (kokonaisluku1 + 1) * kokonaisluku2;
    int laskutoimitus2 = (kokonaisluku1 / kokonaisluku2) -10;
    int laskutoimitus3 = kokonaisluku1 % (kokonaisluku2-1);


    printf("%d * %d = %d\n", kokonaisluku1+1, kokonaisluku2, laskutoimitus1);
    printf("(%d / %d) - 10 = %d\n", kokonaisluku1, kokonaisluku2, laskutoimitus2);
    printf("%d %% %d = %d", kokonaisluku1, kokonaisluku2-1, laskutoimitus3);
    return(0);


}