#include <stdio.h>

int main() {
    int base, exp;
    printf("Entrer un base: ");
    scanf("%d", &base);
    printf("Entrer un exposant: ");
    scanf("%d", &exp);
    int result =1;
    for (int i = 0;i < exp; i++) {
        result = result * base;
    }
    printf("%d",result);
}