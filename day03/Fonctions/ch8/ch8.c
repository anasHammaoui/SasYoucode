#include <stdio.h>

int pairNon(int n) {
    if (n%2 == 0) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int num;
    printf("Entrer un numiro: ");
    scanf("%d",&num);
    if (pairNon(num)) {
        printf("Pair\n");
    } else {
        printf("Impair\n");
    }
}