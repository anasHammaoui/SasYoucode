#include <stdio.h>

int main() {
    int nbrElem;
    // ajouter les elements
    printf("Entrer le nombre d'elements: ");
    scanf("%d",&nbrElem);
    int table[nbrElem];
    for (int i = 0; i < sizeof(table)/sizeof(table[0]);i++) {
        printf("Entrer l'element %d: ", i+1);
        scanf("%d",&table[i]);
    }
    // verifier et afficher si l'element est pair
    for (int i = 0; i < sizeof(table)/sizeof(table[0]);i++) {
        if (table[i] % 2 == 0) {
         printf("%d ", table[i]);
        }
    }
}