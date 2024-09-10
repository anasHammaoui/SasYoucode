#include <stdio.h>
#include <math.h>
int main(){
   float a,b,c;
   printf("Entrer le nombre a: ");
   scanf("%f",&a);
   printf("Entrer le nombre b: ");
   scanf("%f",&b);
   printf("Entrer le nombre c: ");
   scanf("%f",&c);
   float moyenneGeo = pow((a*b*c),( 1.0/3.0));
   printf("La moyenne geometrique est: %.2f",moyenneGeo);
}