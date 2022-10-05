#include <stdio.h>
#include <stdlib.h>
//0 je kraj rad, 1 je podizanje, a 2 ulaganje gotovine. Stanje je globalna varijabla.
//meni ispisivati sve dok korisnik ne upise 0.
float stanje;
int podizanje();
int ulaganje();


int main()
{
int izbor;
    do{
        printf("Izaberite:\n 0 - kraj rada\n 1 - podizanje gotovine\n 2 - ulaganje gotovine\n");
        scanf("%d", &izbor);

        printf("Izbabrali ste: %d", izbor);

        switch(izbor){
    case 1:
        podizanje();
        break;

    case 2:
        ulaganje();
        break;

    default:
        printf("Kraj programa!");
        }
    }while(izbor>0);

    return 0;
}

int podizanje(){
    int iznos;
    printf("Unesite zeljeni iznos:\n");
    scanf("%d",&iznos);

    if(stanje>iznos){
        stanje-=iznos;
        printf("Novo stanje je %lf.", stanje);
            }
    else
        printf("Nedovoljno novca na racunu.");
    }

int ulaganje(){
    int iznos;
    printf("Unesite zeljeni iznos:\n");
    scanf("%d",&iznos);

    stanje+=iznos;
        printf("Novo stanje je %lf.", stanje);
    }
