#include <stdio.h>
#include <stdlib.h>
double p (double, double);
double zapremina(double, double);
int main()
{
    double radius;
    double visina;
    printf("Upisite radius i duzinu cilindra:\n");
    scanf("%lf%lf", &radius,&visina);

    double pov= p(radius, visina);
    double zapr= zapremina(radius, visina);

    printf("Povrsina je %lf, a zapremina %lf", pov, zapr);
    return 0;
}

double p (double r, double h){
    double povrs = (2*(r*r*3.14))+(h*(2*r*3.14));
    return povrs;
}
double zapremina (double r, double h){
    return (r*r*3.14)*h;
}
