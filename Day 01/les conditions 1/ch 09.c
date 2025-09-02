#include <stdio.h>

int main() {
   char c;
   printf("entrer votre caractère  :\n ");
   scanf("%c",&c);
   if(c>=65 && c<=90){
       printf("Majuscule");
   }else if(c>=97 && c<=122){
       printf("Minuscule");
   }else{
       printf("pas un alphabet");
   }
   

    return 0;
}