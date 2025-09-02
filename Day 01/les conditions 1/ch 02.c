#include <stdio.h>

int main() {
    char c ;
    printf("entrer un caractere \n");
    scanf("%c",&c);
    switch(c){
        case 'a':
        case 'e':
        case 'u':
        case 'o':
        case 'i':
        case 'A':
        case 'E':
        case 'U':
        case 'O':
        case 'I':
        printf("%c est une voyelle.\n", c);
        break;
        default : 
         printf("%c n'est pas une voyelle.\n", c);



    }

    return 0;
