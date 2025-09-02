#include <stdio.h>

int main() {
    double km, yards;

    printf("Entrez la distance en kilometres : ");
    scanf("%lf", &km);

    yards = km * 1093.61;

    printf("Distance en yards : %.2lf\n", yards);

    return 0;
}