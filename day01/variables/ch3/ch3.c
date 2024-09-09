#include <stdio.h>

int main() {
    float disKm;
    printf("Entrer la distance en km: ");
    scanf("%f",&disKm);
    float yards = disKm * 1093.61;
    printf("La distance en Yards C'est: %.2f\n",yards);
}