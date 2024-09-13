#include <stdio.h>

int main() {
    int base,exposant,puissance = 1;
    printf("Entrer une base positive: ");
    scanf("%d",&base);
    printf("Entrer une exposant positive: ");
    scanf("%d",&exposant);
    if (base < 0 || exposant < 0) {
        printf("Entrer un positive valeur!!\n");
        return 1;
    } else {
        for (int i=1; i <= exposant;i++) {
            puissance = puissance *base;
        }
    }
    printf("%d",puissance);
}