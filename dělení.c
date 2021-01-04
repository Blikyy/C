#include <stdio.h>

int main(){

int cislo1, cislo2, vysledek;

printf("napis prvni cislo\n");

scanf("%i", &cislo1);

printf("napis druhe cislo\n");

scanf("%i", &cislo2);

vysledek = cislo1 / cislo2;

printf("vysledek je %i", vysledek);

return 0;
}