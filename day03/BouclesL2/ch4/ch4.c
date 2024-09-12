#include <stdio.h>

int main() {
    int num;
    int place = 1;
    int reversed = 0;
    printf("Entrer le nombre: ");
    scanf("%d",&num);
    while (num >0) {
        reversed =reversed*10+ (num%10);
        place = place*10;
        num /=10;
    }
    printf("%d",reversed);
}