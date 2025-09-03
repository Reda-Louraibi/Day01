#include <stdio.h>

int main() {
    int T[20] , n , i ,s=0;
    printf("donnez la taille  \n");
    scanf("%d",&n);
    
  for(i=0;i<n;i++)
  {
      printf("donnez un nombre \n ");
      scanf("%d",&T[i]);
  }
  for(i=0;i<n;i++)
  {
      s+=T[i];
  }
  
  printf("la somme est %d \n ",s);
  

    return 0;
}