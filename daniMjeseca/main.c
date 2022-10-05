#include <stdio.h>
#include <stdlib.h>
#define MJESEC_MAX 12

int dani (int, int);

int main()
{
    int mjes, god;
    printf("Unesite broj mjeseca i godinu:\n");
    scanf("%d%d", &mjes,&god);
    while(mjes>MJESEC_MAX){
    printf("Unesite ISPRAVAN broj mjeseca i godinu:\n");
    scanf("%d%d", &mjes,&god);
    }
    int dan = dani(mjes, god);
    printf("Mjesec %d je godine %d imao %d dana.", mjes, god, dan);
        return 0;
}

int dani (int m, int y){
    if(y%4==0 && y%400==0 && y%100==0){
        switch(m){
        case(1):
           return 31;
            break;
        case(2):
           return 29;
            break;
        case(3):
           return 31;
            break;
        case(4):
           return 30;
            break;
        case(5):
           return 31;
            break;
        case(6):
           return 30;
            break;
        case(7):
           return 31;
            break;
        case(8):
           return 31;
            break;
        case(9):
           return 30;
            break;
        case(10):
           return 31;
            break;
        case(11):
           return 30;
            break;
        case(12):
           return 31;
            break;
        }
    }else{
     switch(m){
        case(2):
           return 28;
            break;
        case(3):
           return 31;
            break;
        case(4):
           return 30;
            break;
        case(5):
           return 31;
            break;
        case(6):
           return 30;
            break;
        case(7):
           return 31;
            break;
        case(8):
           return 31;
            break;
        case(9):
           return 30;
            break;
        case(10):
           return 31;
            break;
        case(11):
           return 30;
            break;
        case(12):
           return 31;
            break;
        }
    }
}
