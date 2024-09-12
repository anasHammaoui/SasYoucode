#include <stdio.h>

int main() {
    int nbrElem;
    printf("Entrer le nombre d'elements: ");
    scanf("%d",&nbrElem);
    int table[nbrElem];
    int max = 0;
    for (int i = 0; i < sizeof(table)/sizeof(table[0]);i++) {
        printf("Entrer l'element %d: ", i+1);
        scanf("%d",&table[i]);
    }
     for (int i = 0; i < sizeof(table)/sizeof(table[0]);i++) {
        if (table[i] > max) {
            max = table[i];
        }
    }
    printf("%d\n",max);
}