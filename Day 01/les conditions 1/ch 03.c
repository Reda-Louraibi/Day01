#include <stdio.h>

int main() {
    int a, b, somme;

    printf("Entrez le premier entier : ");
    scanf("%d", &a);

    printf("Entrez le deuxieme entier : ");
    scanf("%d", &b);

    if (a == b) {
        somme = 3 * (a + b);
        printf("%d\n", somme);
    } else {
        somme = a + b;
        printf("%d\n", somme);
    }

    return 0;
