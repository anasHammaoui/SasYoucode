#include <stdio.h>

int main() {
    int jouracc, jourutilise, status, jourrestants;
    printf("Entrer nombre des jours de conges accordes: ");
    scanf("%d",&jouracc);
    printf("Entrer nombre des jours de conges utilises: ");
    scanf("%d",&jourutilise);
    printf("Entrer Statut de l'employe (0 pour temps partiel, 1 pour temps plein): ");
    scanf("%d",&status);
    if (status == 0) {
        jourrestants = (jouracc/2) - jourutilise;
    } else if (status == 1) {
        jourrestants = jouracc - jourutilise;
    }
    if (jourutilise > jouracc) {
        printf("Alert!!\n");
    } else {
        printf("les jour restont sont: %d",jourrestants);
    }
}