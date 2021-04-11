#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main() {

int pc;
int min = 1, max = 2;
int hrac;
int w = 3;
int x = 0;
int y = 0;

printf("1. kamen| 2. nuzky| 3. papir\n");

while (x !=w && y !=w)
{
srand(time(0));
pc = (rand() % (max - min + 1)) + min;

printf("tvoje score = %d\nPC score = %d\n", x, y);
printf("zvol moznost:\n");
scanf("%d",&hrac);

if(hrac == 1 && pc ==1){
    printf("kamen x kamen\n");
    printf("remiza\n");
}
else if (hrac == 2 && pc == 2)
{   printf("nuzky x nuzky\n");
    printf("remiza\n");
}
else if (hrac == 3 && pc == 3)
{   printf("papir x papir\n");
    printf("remiza\n");
}
else if (hrac == 1 && pc == 3)
{   printf("kamen x papir\n");
    printf("prohra\n");
    y++;
}   
else if (hrac == 2 && pc == 1)
{   printf("nuzky x kamen\n");
    printf("prohra\n");
    y++;
}
else if (hrac == 3 && pc == 2)
{   printf("papir x nuzky\n");
    printf("prohra\n");
    y++;
}
else if (hrac == 1 && pc == 2)
{   printf("kamen x nuzky\n");
    printf("vyhra\n");
    x++;
}   
else if (hrac == 2 && pc == 3)
{   printf("nuzky x papir\n");
    printf("vyhra");
    x++;
}
else if (hrac == 3 && pc == 1)
{   printf("papir x nuzky\n");
    printf("vyhra\n");
    x++;
}
}

if(x == w)
{
   printf("## vyhral si juhuuuuu ##");
}
else
{
    printf("## prohral si :( ##");
}


return 0;
}