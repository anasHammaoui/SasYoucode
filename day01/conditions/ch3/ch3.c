#include <stdio.h>

int main() {
    int a,b,somme;
    printf("Entrer le nombre a: ");
    scanf("%d",&a);
    printf("Entrer le nombre b: ");
    scanf("%d",&b);
    somme = a+b;
    if (a == b) {
        int triple = somme *3;
        printf("Le triple de somme identique est: %d",triple);
    } else {
        printf("Non identique la somme est: %d",somme);
    }
}