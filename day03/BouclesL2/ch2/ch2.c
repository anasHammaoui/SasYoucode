#include <stdio.h>

int main() {
    int num;
    printf("Entrer un numiro");
    scanf("%d",&num);
    for(int i =1; i <= num;i++) {
        for (int j = 1; j <= num -i; j++) {
            printf(" ");
        }
        for (int n = 1; n <= i*2-1; n++) {
            printf("*");
        }
        printf("\n");
    }
}