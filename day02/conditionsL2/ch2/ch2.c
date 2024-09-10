#include <stdio.h>

int main() {
    int age,typeV,nbA;
    printf("Entrer l'age de conducteur: ");
    scanf("%d",&age);
    printf("Entrer le type de voiture (1 pour sportive, 2 pour utilitaire, 3 pour familiale): ");
    scanf("%d",&typeV);
    printf("Entrer Nombre d'accidents au cours des 5 dernieres annees: ");
    scanf("%d",&nbA);
    float primeBase = 100,prime = 120;
    if (age < 25) {
        primeBase = primeBase*1.5;
    } else if (age >= 25 && age <= 65) {
        primeBase = primeBase;
    } else if (age > 65) {
        primeBase = primeBase * 1.2;
    }
    if (typeV == 1) {
        prime = prime*2;
    } else if (typeV == 2) {
        prime = prime * 1.2;
    } else if (typeV == 3) {
        prime = prime* 1.1;
    }
    if (nbA > 1) {
        prime = prime + (prime * 0.30);
    }
    printf("Votre prime est: %.2f euro",prime);
    printf("Votre prime de base est: %.2f euro",primeBase);
}