#include <stdio.h>

int main() {
    float pnombre,dnombre,tnombre;
    printf("Entrer le premiere nombre: ");
    scanf("%f",&pnombre);
    printf("Entrer le deuxieme nombre: ");
    scanf("%f",&dnombre);
    printf("Entrer la troisieme nombre: ");
    scanf("%f",&tnombre);
    float moyenne = (pnombre*2 + dnombre*3+ tnombre*5)/10;
    printf("La moyenne ponderee est: %.2f",moyenne);
}