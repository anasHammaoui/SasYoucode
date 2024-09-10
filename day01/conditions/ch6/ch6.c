#include <stdio.h>

int main() {
    float num ;
    printf("Entrer un nombre: ");
    scanf("%f",&num);
    if (num > 0) {
        printf("Positive\n");
    } else if (num < 0) {
        printf("Negative\n");
    } else {
        printf("Null\n");
    }
}