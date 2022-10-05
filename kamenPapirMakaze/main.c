#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int d[10];

int main()
{
    int num;
    printf("Izaberite:\n 0-kamen\n 1-papir\n 2-makaze\n");
    scanf("%d", &num);

   while(num<0 || num>2){
    printf("Pogresan broj. Izaberite:\n 0-kamen\n 1-papir\n 2-makaze\n");
    scanf("%d", &num);
   }

   int ran=izaberi();

   if(ran==2){
    if(num==2)
        printf("Izabrali ste makaze kao i racunar. Nerijeseno!");
    else if (num==1)
        printf("Izabrali ste papir, a racunar je makaze. Izgubili ste.");
    else
        printf("Izabrali ste kamen, a racunar je makaze. Pobijedili ste!");
    }

    if(ran==1){
    if(num==2)
        printf("Izabrali ste makaze, a racunar je papir. Pobijedili ste!");
    else if (num==1)
        printf("Izabrali ste papir kao i racunar. Nerijeseno!");
    else
        printf("Izabrali ste kamen, a racunar je papir. Izgubili ste.");
    }

    if(ran==0){
    if(num==2)
        printf("Izabrali ste makaze, a racunar je kamen. Izgubili ste.");
    else if (num==1)
        printf("Izabrali ste papir, a racunar je kamen. Pobijedili ste!");
    else
        printf("Izabrali ste kamen kao i racunar. Nerijeseno!");
    }


    return 0;
}

int izaberi (void){
    int total = rand()%3;
    return total;
}
