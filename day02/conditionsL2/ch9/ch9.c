#include <stdio.h>

int main() {
    int salBase, heurSupp, typePost;
    printf("Entrer votre salaire de base: ");
    scanf("%d",&salBase);
    printf("Entrer nombre d'heurs supp: ");
    scanf("%d",&heurSupp);
    printf("Entrertype de poste: \n");
    printf("1 pour junior\n");
    printf("2 pour senior\n");
    scanf("%d",&typePost);
    float prime;
    if (typePost == 1) {
        prime = salBase * 0.1;
    } else if (typePost == 2) {
        prime = salBase * 0.2;
    }
    printf("Votre prime est: %.2f", prime);
}