#include <stdio.h>
int main() {
    float tempC;
    printf("Entrer la temperature en Celsius: ");
    scanf("%f",&tempC);
    float tempKelvin = tempC + 273.15;
    printf("La temperature en Kelvin c'est: %.2f", tempKelvin);
}