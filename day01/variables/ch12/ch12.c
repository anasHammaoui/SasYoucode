#include <stdio.h>

int main() {
    int num;
    printf("Entrer un nombre de quatre chifre: ");
    scanf("%d",&num);
    int inverse = (num %10)*1000+ ((num/10)%10)*100 + (((num/10)/10)%10)*10 + ((((num/10)/10)/10)%10);
    printf("%d",inverse);
}