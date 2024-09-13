#include <stdio.h>

int main() {
    int num;
    printf("Entrer un nombre: ");
    scanf("%d",&num);
    double fact = 1;
    for (int i=num; i >=  1;i--) {
        fact = fact * i;
    }
    printf("%2.lf",fact);
}