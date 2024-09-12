#include <stdio.h>

int main() {
    int nbrElem1,nbrElem2;
    // ajouter les elements aux tableau 1
    printf("Entrer le nombre d'elements de tableau 1: ");
    scanf("%d",&nbrElem1);
    int table1[nbrElem1];
    for (int i = 0; i < sizeof(table1)/sizeof(table1[0]);i++) {
        printf("Entrer l'element %d: ", i+1);
        scanf("%d",&table1[i]);
    }
    // ajouter les elements aux tableau 2
    printf("Entrer le nombre d'elements de tableau 2: ");
    scanf("%d",&nbrElem2);
    int table2[nbrElem2];
    for (int i = 0; i < sizeof(table2)/sizeof(table2[0]);i++) {
        printf("Entrer l'element %d: ", i+1);
        scanf("%d",&table2[i]);
    }

    // fusion de les deux tableaux
    int fusion[nbrElem1+nbrElem2];
    int countT1 = 0,countT2 = 0;
    for (int i = 0; i < (nbrElem1+ nbrElem2);i++) {
        if(countT1 < nbrElem1) {
            fusion[i] = table1[countT1];
            countT1++;
        } else if (countT2 < nbrElem2) {
            fusion[i] = table2[countT2];
            countT2++;
        }
    }
      for (int i = 0;i <( nbrElem1+ nbrElem2); i++) {
        printf("%d ",fusion[i]);
    }
}