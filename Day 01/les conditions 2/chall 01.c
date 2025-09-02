#include <stdio.h>

int main() {
    float revenu, score, duree;

    printf("Entrez le revenu annuel (en euros) : ");
    scanf("%f", &revenu);

    printf("Entrez le score de credit (sur 1000) : ");
    scanf("%f", &score);

    printf("Entrez la duree du pret (en annees) : ");
    scanf("%f", &duree);

    if (revenu >= 30000 && score >= 700 && duree <= 10)
        printf("Eligibilite : Eligible\n");
    else if (revenu >= 30000 && score >= 650 && duree <= 15)
        printf("Eligibilite : Eligible avec conditions\n");
    else
        printf("Eligibilite : Non eligible\n");

    return 0;
}