#include <stdio.h>

double factoriel(int num) {
    double fact = 1;
    for (int i = num; i >= 1; i--) {
        fact = fact * i;
    }
    return fact;
}
int main() {
    int num;
    printf("Entrer un numiro: ");
    scanf("%d",&num);
    printf("%.0lf",factoriel(num));
}