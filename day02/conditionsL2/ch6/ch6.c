#include <stdio.h>

int main() {
    float coElect, typeEtili, typeContract;
    printf("Entrer votre consommation d'electricite : ");
    scanf("%f",&coElect);
    printf("Type d'utilisateur: \n");
    printf("1.pour residentiel\n");
    printf("2.pour commercial\n");
    scanf("%f",&typeEtili);
    printf("Type de contract: \n");
    printf("0.pour standard\n");
    printf("1.pour reduit\n");
    scanf("%f",&typeContract);
    float tarifs;
    if (typeEtili == 1) {
        if (typeContract == 0) {
            tarifs = coElect * 0.2;
        } else if (typeContract == 1) {
            tarifs = coElect * 0.15;
        }
    } else if (typeEtili == 2) {
         if (typeContract == 0) {
            tarifs = coElect * 0.3;
        } else if (typeContract == 1) {
            tarifs = coElect * 0.25;
        }
    }
    float sup;
    if (coElect > 500) {
        sup = tarifs * 0.10;
        printf("Vous avez dapassez 500 kw, votre tarif est %.2f et supplement est: %.2f\n",tarifs, sup);
    } else {
        printf("Votre tarif est: %.2f", tarifs);
    }
}