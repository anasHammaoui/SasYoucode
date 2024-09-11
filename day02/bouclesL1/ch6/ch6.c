#include <stdio.h>

int main() {
    int num;
    printf("Entrer un nombre: ");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++) {
        printf("%d", 2 * i);
        if (i != num) {
            printf(", ");
        }
    }
}