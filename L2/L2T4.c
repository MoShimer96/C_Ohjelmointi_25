#include <stdio.h>
#define PI 3.141






int main(void){

    float sade;
    printf("Anna ympyrän säde: ");
    scanf("%f", &sade);
    int valinta;
    printf("\nValitse haluamasi toiminto:");
    printf("\n1) Laske ympyrän kehän pituus");
    printf("\n2) Laske ympyrän pinta-ala");
    printf("\nAnna valintasi: ");
    scanf("%d", &valinta);

    if(valinta == 1){
        float keha = PI*2*sade;
        printf("Ympyrän säde on %.3f ja sen kehän pituus %.3f.", sade, keha);
    } else if(valinta == 2){
        float pintaala = PI * sade * sade;
        printf("Ympyrän säde on %.3f ja sen pinta-ala on %.3f.", sade, pintaala);
    } else{
        printf("Tuntematon valinta.");
    }


    return(0);
}