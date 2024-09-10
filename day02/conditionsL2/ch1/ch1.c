#include <stdio.h>

int main() {
    int revAnnu, scoreCrdt, durePret;
    printf("Entree la Revenu annuel (en euros): ");
    scanf("%d",&revAnnu);
    printf("Entree le Score de credit (sur 1000): ");
    scanf("%d",&scoreCrdt);
    printf("Entree la Duree du pret (en annees): ");
    scanf("%d",&durePret);

    if (revAnnu >= 30000 && scoreCrdt >= 700 &&durePret <= 10) {
        printf("Eligible\n");
    } else if (revAnnu >= 30000 && scoreCrdt >= 650 &&durePret <= 15) {
        printf("Eligible\n");
    } else if (revAnnu < 30000 && scoreCrdt < 650 &&durePret > 15) {
        printf("Non eligible\n");
    }

}