#include <stdio.h>
#include <stdlib.h>

int main()
{
    int br;
    printf("Unesite broj:\n");
    scanf("%d", &br);

    for (int i=1; i<=br; i++){
           int sum=br*i;
        printf("%d * %d = %d \n",br, i, sum );
    }
    return 0;
}
