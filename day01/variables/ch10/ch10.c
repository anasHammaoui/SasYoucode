#include <stdio.h>
#include <math.h>
int main() {
    const float PI = 3.14;
   float rayon, volume;
   printf("Entrer le rayon de la sphere: ");
   scanf("%f",&rayon);
   volume = (4/3)* PI * pow(rayon,3);
   printf("La volume d'une sphere est: %.2f",volume);
}