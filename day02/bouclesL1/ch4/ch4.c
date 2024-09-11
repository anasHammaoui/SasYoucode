#include <stdio.h>

int main() {
    int num;
    printf("Entrer un nombre: ");
    scanf("%d",&num);
    for (int i = 0;i < num;i++) {
        printf("%d", 2*i+1);
        if (i != num -1) {
            printf(", ");
        }
    }
}