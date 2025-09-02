#include <stdio.h>

int main() {
   int b , e , res ,i ;
   printf("donner la base \n ");
   scanf("%d",&b);
   printf("donner l'exposant \n ");
   scanf("%d",&e);
   for(i=1;i<e;i++){
    res*=b;
   }
   printf(" %d ^ %d = %d \n " , b , e , res);

    return 0;
}