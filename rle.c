#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
 

int main() {

char  str[32];

fgets(str, 32, stdin);

int strl = strlen(str) - 1;

char nvm[64];

int len = 0;

for(int i = 0; i < strl; i++){
    int count = 1;

    while (i < strl - 1 && str[i] == str[i + 1]){
        count++;
        i++;
    }
   len += sprintf(nvm + len, "%i%c", count, str[i]);
}
 printf("%s", nvm);
return 0;
}