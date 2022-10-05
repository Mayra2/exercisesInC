#include <stdio.h>
#include <stdlib.h>
void podizanje(float*);
void ulaganje(float*);

int main()
{

    float stanje = 0;
    float *pstanje=&stanje;
    int izbor;
    do{
        printf("Izaberite:\n 0 - kraj rada\n 1 - podizanje gotovine\n 2 - ulaganje gotovine\n");
        scanf("%d", &izbor);

        printf("Izbabrali ste: %d\n", izbor);

    if (izbor==1){
        podizanje(pstanje);
    }
    else if (izbor==2)
        ulaganje(pstanje);

    else
         printf("Kraj programa!");

    }while(izbor>0);

    return 0;
}

void podizanje(float *pstanje){

    int iznos;
    printf("Unesite zeljeni iznos:\n");
    scanf("%d",&iznos);

    if(*pstanje>iznos){
        *pstanje-=iznos;
        printf("Novo stanje je %lf.\n", *pstanje);
            }
    else
        printf("Nedovoljno novca na racunu.\n");
    }

void ulaganje(float *pstanje){
    int iznos;
    printf("Unesite zeljeni iznos:\n");
    scanf("%d",&iznos);

    *pstanje+=iznos;
        printf("Novo stanje je %lf.\n", *pstanje);

    }
