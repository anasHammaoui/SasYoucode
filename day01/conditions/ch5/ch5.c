#include <stdio.h>

int main() {
    double annee,mois,jours,heurs,minutes,secondes;
    printf("Entrer un annee: ",annee);
    scanf("%lf",&annee);
    mois = annee * 12;
    if (annee / 4 == 0) {
        jours = mois *30 + 1;
    } else {
         jours = mois *30 + 1;
    }
    heurs = jours * 24;
    minutes = heurs * 60;
    secondes = minutes * 60;
    int num;
    printf("Entrer aux quel tu veux convertir:\n");
    printf("1.Mois\n");
    printf("2.Jours\n");
    printf("3.Heurs\n");
    printf("4.Minutes\n");
    printf("5.Secondes\n");
    scanf("%d",&num);
    if (num == 1) {
        printf("***%.0lf mois****\n",mois);
    } else if (num == 2) {
        printf("***%.0lf jours****\n",jours);
    } else if (num == 3) {
        printf("***%.0lf heurs****\n",heurs);
    } else if (num == 4) {
        printf("***%.0lf minutes****\n",minutes);
    } else if (num ==  5) {
        printf("***%.0lf secondes****\n",secondes);
    }

}