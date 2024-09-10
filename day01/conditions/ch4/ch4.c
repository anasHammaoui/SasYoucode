#include <stdio.h>
#include <math.h>
int main() {
    int a,b,c;
    printf("Entrer le nombre a: ");
    scanf("%d",&a);
    printf("Entrer le nombre b: ");
    scanf("%d",&b);
    printf("Entrer le nombre c: ");
    scanf("%d",&c);
    float delta = pow(b,2) -( 4 * a * c);
    if (delta > 0) {
        float x1 = (-(b)- sqrt(delta))/ (2*a);
        float x2 = (-(b)+sqrt(delta))/ (2*a);
          printf("Cette equation a deux solutions\n");
          printf("x1 = %.2f.\n",x1);
          printf("x2 = %.2f.\n",x2);
    } else if (delta == 0) {
        float x = (-(b))/(2*a);
        printf("Cette equation a une seul solution x = %.2f.\n",x);
    } else if (delta <0) {
        printf("Il exist aucun solution dans R.\n");
    }
}