#include <stdio.h>
#include <stdlib.h>
double BMI (double, double);
int main()
{
    double kilo, meter;
    printf("Unesite svoju tezinu u kg i visinu u m:\n");
    scanf("%lf%lf", &kilo, &meter);
    double index=BMI(kilo, meter);

    printf("Vas BMI iznosi %lf.", index);
    return 0;
}

double BMI (double kg, double m){
    double total= kg/(m*m);
    return total;
}
