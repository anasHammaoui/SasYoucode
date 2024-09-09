#include <stdio.h>

int main() {
    double a,b;
    printf("Entrer le nombre a: ");
    scanf("%lf",&a);
    printf("Entrer le nombre b: ");
    scanf("%lf",&b);
    double plus = a+b, moins = a-b, fois = a*b, divise = a/b;
    printf("plus: %.2lf\n",plus);
    printf("moins: %.2lf\n",moins);
    printf("fois: %.2lf\n",fois);
    printf("divide: %.2lf\n",divise);
}