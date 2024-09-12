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
    // remplacer les elements
    int valeurRem, rempPar;
    printf("Entrer la valeur que vous voullez remplacer: ");
    scanf("%d",&valeurRem);
    printf("Entrer la nouvelle valeur: ");
    scanf("%d",&rempPar);
    for (int i= 0; i<sizeof(table)/sizeof(table[0]);i++) {
        if (table[i] == valeurRem) {
            table[i] = rempPar;
        }
    }
    // afficher les nouvelles elements

     for (int i = 0; i < sizeof(table)/sizeof(table[0]);i++) {
        printf("%d",table[i]);
        if (i !=  sizeof(table)/sizeof(table[0]) - 1) {
            printf(", ");
        }
    }
}