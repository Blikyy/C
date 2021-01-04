#include <stdio.h>


int main(){

   int x;
   
   printf("how many cm are you measuring:");
   scanf("%i", &x);

   if( x < 180){   
      printf("you are small\n");
   }
   else if( x == 180){
       printf("you have an average height\n");
   }
   else{
       printf("you're too tall\n");
   }

     system("pause");
    return 0;
}

