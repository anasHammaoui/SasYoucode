#include <stdio.h>
int main() {
    int age, annCos, montTot;
    printf("Entrer votre age: ");
    scanf("%d",&age);
    printf("Entrer anne de cotisation: ");
    scanf("%d",&annCos);
    printf("Montant total epargne (en euro): ");
    scanf("%d",&montTot);
    float planRet;
    if (age >= 65 && annCos >= 30 && montTot >= 100000) {
        printf("Plan complet avec pension elevee");
        planRet = montTot;
    } else if (age >= 65 && annCos >= 20 && montTot >= 50000) {
        printf("Plan partiel avec pension moyenne");
        planRet = montTot/2;
    } else if (age < 65) {
        printf("Plan epargne non encore disponible");
    }
    if (planRet >= 10000 && planRet <= 50000) {
        planRet = planRet + (planRet *0.05);
    }
    printf(", %.2f euro\n",planRet);
}