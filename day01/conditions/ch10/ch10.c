#include <stdio.h>
#include <string.h>
int main() {
    char date[20];
    int jour,mois,annee;
    char moisc[12];
    printf("Entrer la date: ");
    scanf("%s",&date);
    sscanf(date,"%d/%d/%d",&jour,&mois,&annee);
    switch(mois) {
        case 1:
        strcpy(moisc, "Janvier");
        break;
        case 2:
       strcpy( moisc, "fevrier");
        break;
        case 3:
        strcpy(moisc, "mars");
        break;
        case 4:
        strcpy(moisc, "avril");
        break;
        case 5:
        strcpy(moisc , "mai");
        break;
        case 6:
       strcpy(moisc, "juin");
        break;
        case 7:
        strcpy(moisc, "juillet");
        break;
        case 8:
        strcpy(moisc, "aout");
        break;
        case 9:
        strcpy(moisc, "septembre");
        break;
        case 10:
       strcpy(moisc, "octobre");
        break;
        case 11:
        strcpy(moisc, "novembre");
        break;
        case 12:
        strcpy(moisc, "decembre");
        break;
        default:
        strcpy(moisc, "Invalide");
    }
    printf("%d-%s-%d",jour,moisc,annee);
}