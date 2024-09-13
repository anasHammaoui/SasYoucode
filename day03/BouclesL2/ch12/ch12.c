#include <stdio.h>

int main() {
    int numEle;
    printf("Entrer le nombre d'elements: ");
    scanf("%d",&numEle);
    int table[numEle];
    // Entree les elements:
    printf("Entrer les elements: \n");
    for (int i=0; i < sizeof(table)/sizeof(table[0]);i++) {
        printf("=> ");
        scanf("%d",&table[i]);
    }
    // appliquer algo de tri par bulles
    for (int i =0; i< sizeof(table)/sizeof(table[0]);i++) {
        for (int j= i+1; j < sizeof(table)/sizeof(table[0]);j++) {
            if (table[j] < table[i]) {
                int temp = table[j];
                table[j] = table[i];
                table[i] = temp;
            }
        }
    }
    // afficher les elements en ordre
     for (int i=0; i < sizeof(table)/sizeof(table[0]);i++) {
        printf("%d",table[i]);
        if (i !=(sizeof(table)/sizeof(table[0])) -1){
            printf(", ");
        }
    }
}