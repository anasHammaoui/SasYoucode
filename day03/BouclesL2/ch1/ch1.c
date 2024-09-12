#include <stdio.h>

int main() {
    int num;
    printf("Entrer le nombre pour affiher sa table inverse: ");
    scanf("%d",&num);
    for (int i = 10; i >= 1; i--) {
        printf("%d * %d = %d\n",num,i, num * i);
    }
}