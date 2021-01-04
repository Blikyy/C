#include <stdio.h>

int main(){
    

   for (int i = 1; i <= 99; i++){
      
      if(i%2!=0){
          printf("%2d\n", i);
      }
    }
    printf("\n");

    for (int q = 1; q <= 50; q++){
        if( q%5 == 0){
            printf("%i", q);
            
            if(q < 50){
              printf("-");
            }
        }
    }
        printf("\n");
    

    int soucet = 0;

    for(int w = 1; w <= 20; w++){
        soucet = soucet + w;
    }
    printf("%d\n", soucet);
   
    
    
    int y = 0;
    for(int i = -128; i <= 128; i++){
        y = abs(i) + y;
    }
    printf("%i\n", y);
    
    
    
    
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 5 == 0 && i % 7 == 0)
        {
            sum += i;
        }
    }
    printf("%i\n", sum);
    
 return 0;
}