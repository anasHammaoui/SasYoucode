#include <stdio.h>

int main() {
    int num;
    printf("Entrer un nombre de quatre chifre: ");
    scanf("%d",&num);
    if (num < 1000 || num > 9999) {
        printf("Numiro invalide!\n");
        return 1;
    }
    int inverse = (num %10)*1000+ ((num/10)%10)*100 + (((num/10)/10)%10)*10 + ((((num/10)/10)/10)%10);
    printf("%d",inverse);
}