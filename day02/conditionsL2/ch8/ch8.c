#include <stdio.h>

int main() {
    int age, histoMedi, typeCo;
    printf("Entrer votre age: ");
    scanf("%d",&age);
    printf("Entrer historieque medical: \n");
    printf("0 pour aucun probleme\n");
    printf("1 pour probleme mineur\n");
    printf("2 pour probleme majeur\n");
    scanf("%d",&histoMedi);
    printf("Type couverture: \n");
    printf("1 pour de base\n");
    printf("2 pour etendue\n");

    if (age < 30) {
        printf("Plan de base\n");
    } else if (age >= 30 && histoMedi == 0) {
        printf("plan de base\n");
    } else if (age >= 30 && histoMedi >= 1) {
        printf("Plan etendu");
        if (histoMedi == 2) {
            printf(", + couverture supplementaire\n");
        }
    }
}