#include <stdio.h>
#include <stdlib.h>
//izracunati popust na gotovinsko placanje. unos robe, popusta, cijenu sa popustom
double popustNaGotovinu (float, double);
void main()
{
    double cijena;
    float procenatPopusta;

    printf("Unos cijene u KM: \n");
    scanf("%lf", &cijena);

    printf("Unos popusta na gotovinsko placanje u procentima: \n");
    scanf("%f", &procenatPopusta);

    double popust = popustNaGotovinu(procenatPopusta, cijena);
    double vrijednostSaPopustom= cijena - popust;

    printf("Vrijednost popusta je %lf. \n Vrijednost robe sa popustom je %lf.", popust, vrijednostSaPopustom);

}

double popustNaGotovinu (float procenat, double cij){
   double totalPopust = cij * (procenat/100);
    return totalPopust;
}
