#include <stdio.h>



int main(void){

    int lukumaara;

    printf("Anna palautettujen tehtävien lukumäärä: ");
    scanf("%d", &lukumaara);

    if(lukumaara > 30){
        printf("Kurssilla on vain 30 tehtävää.");
    } else if(lukumaara >= 27){
        printf("Olet palauttanut %d tehtävää, joten arvosanasi on 5.", lukumaara);
    } else if(lukumaara >= 24){
        printf("Olet palauttanut %d tehtävää, joten arvosanasi on 4.", lukumaara);
    } else if(lukumaara >= 21){
        printf("Olet palauttanut %d tehtävää, joten arvosanasi on 3.", lukumaara);
    } else if(lukumaara >= 18){
        printf("Olet palauttanut %d tehtävää, joten arvosanasi on 2.", lukumaara);
    } else if(lukumaara >= 15){
        printf("Olet palauttanut %d tehtävää, joten arvosanasi on 5.", lukumaara);
    } else{
        printf("Tuntematon");
    }


    return(0);


}