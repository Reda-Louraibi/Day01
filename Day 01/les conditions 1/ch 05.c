#include <stdio.h>

int main() {
    int choix;
    double annee, resultat;

    printf("Entrez le nombre d'annees : ");
    scanf("%lf", &annee);

    printf("\n=== Menu de Conversion ===\n");
    printf("1. Convertir en mois\n");
    printf("2. Convertir en jours\n");
    printf("3. Convertir en heures\n");
    printf("4. Convertir en minutes\n");
    printf("5. Convertir en secondes\n");
    printf("Entrez votre choix : ");
    scanf("%d", &choix);

    switch(choix) {
        case 1:
            resultat = annee * 12;
            printf("%.2lf\n", resultat);
            break;
        case 2:
            resultat = annee * 365;
            printf("%.2lf\n", resultat);
            break;
        case 3:
            resultat = annee * 365 * 24;
            printf("%.2lf\n", resultat);
            break;
        case 4:
            resultat = annee * 365 * 24 * 60;
            printf("%.2lf\n", resultat);
            break;
        case 5:
            resultat = annee * 365 * 24 * 60 * 60;
            printf("%.2lf\n", resultat);
            break;
        default:
            printf("Choix invalide.\n");
    }

    return 0;
}