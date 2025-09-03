#include <stdio.h>

int main() {
    int T[20] , n , i ,max;
    printf("donnez la taille  \n");
    scanf("%d",&n);
    
  for(i=0;i<n;i++)
  {
      printf("donnez un nombre \n ");
      scanf("%d",&T[i]);
  }
  max=T[0];
  for(i=0;i<n;i++)
  {
      if(max<T[i])
      {
          max=T[i];
      }
  }
  printf("le max est %d \n ",max);
  
  

    return 0;
}