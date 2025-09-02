#include <stdio.h>

int main() {
    double a, b, c, delta, x1, x2;

    printf("Entrez a : ");
    scanf("%lf", &a);

    printf("Entrez b : ");
    scanf("%lf", &b);

    printf("Entrez c : ");
    scanf("%lf", &c);

    delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("Pas de solution reelle\n");
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Solution double : x = %.2lf\n", x1);
    } else {
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        printf("Deux solutions reelles : x1 = %.2lf et x2 = %.2lf\n", x1, x2);
    }

    return 0;
