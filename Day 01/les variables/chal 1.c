#include <stdio.h>

int main() {
    char nom, prenom, sexe, email;
    int age;

    printf("Entrez votre initiale de nom : ");
    scanf(" %c", &nom);

    printf("Entrez votre initiale de prenom : ");
    scanf(" %c", &prenom);

    printf("Entrez votre age : ");
    scanf("%d", &age);

    printf("Entrez votre sexe (M/F) : ");
    scanf(" %c", &sexe);

    printf("Entrez l'initiale de votre email : ");
    scanf(" %c", &email);

    printf("Nom : %c\n", nom);
    printf("Prenom : %c\n", prenom);
    printf("Age : %d\n", age);
    printf("Sexe : %c\n", sexe);
    printf("Email : %c\n", email);

    return 0;
}