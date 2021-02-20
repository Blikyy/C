#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main() {

int min = 1, max = 6;
srand(time(0));
int kostka;
kostka = (rand() % (max - min + 1)) + min;
printf("padla ti %i", kostka);
return 0;
}