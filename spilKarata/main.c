#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//program za nasumicno izvlacenje karte iz splia od 52 karte. mora ispisati koja je karta (a,2,3...,j,q,k) i znak.
#define KARTA_MAX 52;

int znak(void);
char broj (void);

int main()
{
    time_t t;
    srand((unsigned) time(&t));
    char karta='0';
    int brojZnaka=znak();
    karta= broj();
    if(brojZnaka==0)
        printf("Djetelina %c", karta);
    else if(brojZnaka==1)
        printf("Karo %c", karta);
    else if(brojZnaka==2)
        printf("Herz %c", karta);

        else
            printf("Pik %c", karta);
    return 0;
}
int znak (void){
    int total = rand()%4;
    return total;
}

char broj (void){
     int total = rand()%12;
switch(total){
 case(0):
    return 'A';
    break;
case(1):
    return '2';
    break;
case(2):
    return '3';
    break;
case(3):
    return '4';
    break;
case(4):
    return '5';
    break;
case(5):
    return '6';
    break;
case(6):
    return '7';
    break;
case(7):
    return '8';
    break;
case(8):
    return '9';
    break;
case(9):
    return 'J';
    break;
case(10):
    return 'Q';
    break;
case(11):
    return 'K';
    break;
}
}
