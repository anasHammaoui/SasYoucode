#include <stdio.h>

int main() {
    int num;
    printf("Entrer un nombre: ");
    scanf("%d",&num);
    int fib;
    for (int i = 2; i <= num; i++) {
      fib =(i-1)+(i-2);
    }
    printf("%d",fib);
}