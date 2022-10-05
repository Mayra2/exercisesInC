#include <stdio.h>
#include <stdlib.h>

int main()
{
    int uplata=100;
    double kamatnaStopa=(1+0.00417);
    int mjesec;
    double ukupno=0;
    printf("Upisite broj mjeseci:\n");
    scanf("%d", &mjesec);
    for(int i =1; i<=mjesec; i++){
        ukupno+=(uplata*kamatnaStopa);
        }
    printf("Nakon %d mjeseci, stednja je %lf", mjesec, ukupno);
    return 0;
}
