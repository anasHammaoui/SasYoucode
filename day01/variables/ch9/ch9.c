#include <stdio.h>
#include <math.h>
int main(){
    float x1,x2,y1,y2,z1,z2,distance;
    printf("Entrer x1: ");
    scanf("%f",&x1);
    printf("Entrer x2: ");
    scanf("%f",&x2);
    printf("Entrer y1: ");
    scanf("%f",&y1);
    printf("Entrer y2: ");
    scanf("%f",&y2);
    printf("Entrer z1: ");
    scanf("%f",&z1);
    printf("Entrer z2: ");
    scanf("%f",&z2);
    distance = sqrt(pow((x2 -x1),2)+pow((y2 -y1),2)+pow((z2 -z1),2));
    printf("La distance entre 2 points dans un espace 3D est: %.2f",distance);
}