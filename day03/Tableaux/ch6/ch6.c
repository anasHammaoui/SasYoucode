#include <stdio.h>

int main() {
    int nbrElem,facteur;
    printf("Entrer le nombre d'elements: ");
    scanf("%d",&nbrElem);
    printf("Entrer le nombre de facteur: ");
    scanf("%d",&facteur);
    int table[nbrElem];
    for (int i = 0; i < sizeof(table)/sizeof(table[0]);i++) {
        printf("Entrer l'element %d: ", i+1);
        scanf("%d",&table[i]);
    }
     for (int i = 0; i < sizeof(table)/sizeof(table[0]);i++) {
        table[i] = table[i] * facteur;
        printf("la multiplication est: %d\n",table[i]);
    }
}