#include <stdio.h>
#include <stdlib.h>

int main()
{
 int broj;
    printf("Upisi broj:\n");
    scanf("%d", &broj);
    int fakt=1;
    for (int i=1; i<=broj; i++){
        fakt*=i;
    }
    printf("fakt je %d", fakt);
//novi program za provjeru koji su br djeljivi sa 9
    int n1 = 1;
    int n2= 100;
    for(int j=1; j>=n1 && j<=n2; j++){
        if(j%9==0)
            printf("%d\n", j);
    }
    return 0;
}
