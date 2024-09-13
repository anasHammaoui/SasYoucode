#include <stdio.h>

int main(){
    int table[60],compt;
    printf("Entrer les nomnbres pour calculer la moyenne:\n");
    for (int i = 0;i <= 60; i++) {
        printf("==>");
        scanf("%d",&table[i]);
        compt++;
        if (table[i] == 0) {
            break;
        }
    }
    table[60] = table[compt+1];
    int somme = 0;
    for (int i = 0;i < compt;i++) {
        somme = somme + table[i];
    }
    int moyenne = somme / (compt - 1);
    printf("%d\n",moyenne);
}