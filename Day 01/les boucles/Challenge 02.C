#include <stdio.h>

int main() {
   int n,i,fact=1;
   printf("donnez un nombre \n");
   scanf("%d",&n);
   for(i=1;i<=n;i++){
       fact=fact*i;
   }
   printf("le fact de %d est %d \n", n , fact);

    return 0;
}