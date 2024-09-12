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
    // calculer et afficher la moyenne
    int moyenne = 0, somme = 0;
     for (int i = 0; i < sizeof(table)/sizeof(table[0]);i++) {
        somme = somme + table[i];
     }
    moyenne = somme / nbrElem;
    printf("La moynne de ces elements est: %d\n",moyenne);
}