#include <stdio.h>

int main(){

     int sachy[8][8]={1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1};
    for(int x = 0; x < 8; x++)
    {
        for(int y = 0; y < 8;y++)
        {
            printf("%d ",sachy[x][y]);
        }
        printf("\n");

    }
    printf("\n");

    int a = 5;
    int b = 5;
    int c;
    int d;
    c = a + b;  
    d = a * b; 

    if(c < 0){
        printf("je tam 999 nul");
    }
    else if(a > 15){
        printf("je tam 5000 nul");
    }
    else{
        printf("je tam 32 nul");
    }

    printf("\n");

    if(d = 50){
        printf("je tam 32 jednicek");
    }
    else{
        printf("je tam 666 jednicek");
    }
    

  return 0;
}