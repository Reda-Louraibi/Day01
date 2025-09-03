#include <stdio.h>

int main() {
    int T[20] , n , i;
    printf("donnez la taille  \n");
    scanf("%d",&n);
    
  for(i=0;i<n;i++)
  {
      printf("donnez un nombre \n ");
      scanf("%d",&T[i]);
  }
  for(i=0;i<n;i++)
  {
      printf("T[%d]=%d \n " , i ,T[i]);
  }

    return 0;
}