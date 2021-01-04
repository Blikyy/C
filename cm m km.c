#include <stdio.h>

int main(){

float cm, metr,km;

printf("Napis delku v cm");
scanf("%f", &cm);

metr = cm / 100.0;
km = cm / 100000.0;

printf("delka v metrech = %.2f m \n", metr);
printf("delka v km = %.2f km\n", km);

return 0;
}