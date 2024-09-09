#include <stdio.h>

int main() {
    float kmh;
    printf("Entre la vitesse en km/h: ");
    scanf("%f",&kmh);
    float ms = kmh * 0.27778;
    printf("la vitesse en m/s C'est: %.2f",ms);
}