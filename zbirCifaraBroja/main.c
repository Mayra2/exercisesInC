#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Unesite cijeli pozitivni broj:\n");
    scanf("%d", &n);

    while(n<0){
    printf("Unesite cijeli pozitivni broj:\n");
    scanf("%d", &n);
    }

    int ostatak=0;
    int sum=0;

    while(n>0){
        ostatak=n%10;
        sum+=ostatak;
        n=n/10;
    }

        printf("Suma je %d", sum);
return 0;
}
