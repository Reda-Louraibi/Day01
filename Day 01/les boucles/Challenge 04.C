#include <stdio.h>

int main() {
   int n,i,compt=1;
   printf("donnez un nombre \n");
   scanf("%d",&n);
   for(i=1;i<=n;i++){
       printf(" %d ", compt);
       compt +=2;
   }
   
    return 0;
}