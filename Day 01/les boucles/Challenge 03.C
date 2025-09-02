#include <stdio.h>

int main() {
   int n,i,somme=0;
   printf("donnez un nombre \n");
   scanf("%d",&n);
   for(i=1;i<=n;i++){
       somme +=i;
   }
   printf("le somme  est %d \n", somme);

    return 0;
}