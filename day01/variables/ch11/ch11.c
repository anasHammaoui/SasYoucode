#include <stdio.h>

int main() {
    float longeur,largeur,surface;
    printf("Entrer la longeur: ");
    scanf("%f",&longeur);
    printf("Entrer la largeur: ");
    scanf("%f",&largeur);
    surface = longeur*largeur;
    printf("La surface est: %.2f",surface);
}