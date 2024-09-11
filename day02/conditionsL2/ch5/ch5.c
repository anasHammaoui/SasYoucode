#include <stdio.h>

int main() {
    int budget,destination,nbrPersonne;
    printf("Entrer votre Budget (en euros): ");
    scanf("%d",&budget);
    printf("Entrer votre Destination : \n");
    printf("1.pour plage\n");
    printf("2.pour montagne: \n");
    printf("3.pour ville: \n");
    scanf("%d",&destination);
    printf("Entrer les nombre de personnes: ");
    scanf("%d",&nbrPersonne);
    
    if (budget >= 1000) {
        printf("Voyage haut de gamme");
    } else if (budget >= 500 && budget <= 1000) {
        printf("Voyage moyen");
    } else if (budget < 500) {
        printf(" Voyage économique");
    }
    if (budget >= 1000 && nbrPersonne > 2) {
        printf(", Plage\n");
    } else if (budget >= 500 && nbrPersonne <= 2) {
        printf(", Montagne\n");
    } else {
        printf(", Ville\n");
    }
}