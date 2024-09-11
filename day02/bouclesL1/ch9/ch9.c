#include <stdio.h>

int main() {
    int num;
    printf("Entrer un nombre: ");
    scanf("%d",&num);
    int compt = 0;
    while(num >0) {
        compt++;
        num /= 10;
    }
    printf("%d",compt);
}