#include <stdio.h>

int main() {
    int num;
    printf ("Entrer un nombre:");
    scanf("%d",&num);
    int fact= num;
    for(int i = num - 1; i >= 1; i--) {
        fact = fact * i;
    }
    printf("%d",fact);
}