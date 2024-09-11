#include <stdio.h>

int main() {
    int num;
    printf("Entrer un nombre: ");
    scanf("%d",&num);
    int somme = num;
    for (int i = num-1; i >= 1;i--) {
        somme = somme + i;
    }
    printf("%d",somme);
}