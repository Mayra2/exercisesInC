#include <stdio.h>
#include <stdlib.h>
int suma (int);
double prosjek (int);

int main()
{
    int n;
    printf("Unesite cijeli broj: \n");
    scanf("%d", &n);
    int s = suma(n);
    double av=prosjek(n);

    printf("Suma parnih brojeva do broja %d je %d, a prosjek %lf.", n, s, av);
    return 0;
}

int suma (int br){
    int sum=0;
    for(int i=1; i<=br; i++){
        if(i%2==0)
        sum+=i;
    }
    return sum;
}
double prosjek (int br){
    double avg=1.0;
    double sum=0.0;
    int i =1;
for(i; i<=br; i++){
        if(i%2==0){
            sum+=i;
        }
      avg=sum/i;
}
return avg;
}
