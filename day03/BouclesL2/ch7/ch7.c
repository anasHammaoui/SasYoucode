#include <stdio.h>

int main() {
    int num;
    printf("Entrer un numiro pour trouver la suit: ");
    scanf("%d",&num);
    for(int i = 2; i<=num;i++) {
        printf("%d",(i-1)+(i-2));
        if (i != num) {
            printf(", ");
        }
    }
}