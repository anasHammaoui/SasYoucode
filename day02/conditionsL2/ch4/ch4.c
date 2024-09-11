#include <stdio.h>

int main() {
        int score, ancinnete, recompenseRecue;
        printf("Entrer le score de performance: ");
        scanf("%d",&score);
        printf("Entrer Anciennete (en annees): ");
        scanf("%d",&ancinnete);
        printf("Entrer Recompenses reçues:\n");
        printf("0.pour aucune\n1.pour une\n2.pour deux ou plus\n");
        scanf("%d",&recompenseRecue);
        float bonus;
        if (score >= 90 && ancinnete >= 5) {
            printf("Exellente\n");
        } else if (score >= 75 && ancinnete >= 3) {
            printf("Bonne\n");
        } else if (score >= 50 && ancinnete < 3) {
            printf("Satisfaisante\n");
        } else if (score < 50) {
            printf("Insuffisante\n");
        }
        if (recompenseRecue == 1) {
            bonus = score * 0.10;
            printf("Votre bonus est %.2f", bonus);
        } else if (recompenseRecue >= 2) {
            bonus = score * 0.20;
            printf("Votre bonus est %.2f", bonus);
        }
}