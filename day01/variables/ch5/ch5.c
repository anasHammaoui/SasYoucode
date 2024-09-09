#include <stdio.h>

int main() {
    float tempC;
    printf("Entrer la temperature en Celisius: ");
    scanf("%f",&tempC);
    if (tempC < 0) {
        printf("Solide\n");
    } else if (tempC >= 100) {
        printf("Gaz\n");
    } else if (tempC < 100 && tempC >= 0) {
        printf("Liquide\n");
    }
}