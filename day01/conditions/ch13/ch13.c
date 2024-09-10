#include <stdio.h>

int main() {
    float xa,xb,ya,yb,xp,yp;
    printf("Entrer le cordonnne xa: ");
    scanf("%f",&xa);
    printf("Entrer le cordonnne xb: ");
    scanf("%f",&xb);
    printf("Entrer le cordonnne ya: ");
    scanf("%f",&ya);
    printf("Entrer le cordonnne yb: ");
    scanf("%f",&yb);
    printf("Entrer le cordonnne xp: ");
    scanf("%f",&xp);
    printf("Entrer le cordonnne yp: ");
    scanf("%f",&yp);
    float resX = (xp -xa)/(xb -xa);
    float resY = (yp -ya)/(yb -ya);
    if (resX == resY && resX > 0 && resX < 1 || resY > 0 &&resY <1) {
         printf("Il se trouve dans le plan dans le point:%.2f\n",resX);
    } else {
        printf("Il ne trouve pas dans le plan\n");
    }
}   