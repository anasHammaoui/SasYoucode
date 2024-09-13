#include <stdio.h> 
#include <string.h>
int main() {
    // afficher les jour
    char table[][9] = {"Lundi","Mardi","Mercredi","Jeudi","Vendredi","Samedi","Dimanche"};
    printf("Choisir un jour: \n");
    for (int i=0; i < 7; i++) {
        printf("=> %s\n",table[i]);
    }
    // selectioner le jour
    char jour[100];
    int check = 0;
    scanf("%s",&jour);
    for (int j = 0; j < 7; j++) {
        if (strcmp(table[j], jour) == 0) {
            check = 1;
        }
        if (check == 1) {
            printf("%s",table[j]);
            if (j != 6) {
                printf(", ");
            }
        }
    }
}