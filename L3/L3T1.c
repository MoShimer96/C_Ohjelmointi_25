#include <stdio.h>

float laskePintaAla(float b, float h){
    return  b*h;
}

int main(void){
    printf("Tämä ohjelma laskee suorakulmion pinta-alan.\n");
    float kanta;
    float korkeus;
    float pintaAla;

    printf("Anna suorakulmion kanta: ");
    scanf("%f", &kanta);

    printf("Anna suorakulmion korkeus: ");
    scanf("%f", &korkeus);

    pintaAla = laskePintaAla(kanta, korkeus);
    printf("Suorakulmion pinta-ala on %.2f.\n", pintaAla);
    printf("Kiitos ohjelman käytöstä.");

    return(0);
}



