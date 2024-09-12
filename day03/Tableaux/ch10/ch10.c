#include <stdio.h>

int main() {
    int nbrElem;
    printf("Entrer le nombre d'elements: ");
    scanf("%d",&nbrElem);
    int table[nbrElem];
    for (int i = 0; i < sizeof(table)/sizeof(table[0]);i++) {
        printf("Entrer l'element %d: ", i+1);
        scanf("%d",&table[i]);
    }
    int recherche, present = 0;
    printf("Entrer l'element que vous voullez rechercher: ");
    scanf("%d",&recherche);
    for (int i= 0; i<sizeof(table)/sizeof(table[0]);i++) {
        if (recherche == table[i]) {
            present++;
        }
    }
    if (present >= 1) {
        printf("Present.\n");
    } else {
        printf("Present pas\n");
    }
}