#include <stdio.h>

int main() {
    float moyenne;
    printf("Entrer la moyenne: ");
    scanf("%f",&moyenne);
    if (moyenne < 10) {
        printf("Rescale\n");
    } else if (moyenne >= 10 && moyenne < 12) {
        printf("Passable\n");
    } else if (moyenne >= 12 && moyenne < 14) {
        printf("Assez bien\n");
    } else if (moyenne >= 14 && moyenne < 16){
        printf("Bien");
    } else if (moyenne >= 16) {
        printf("Tres bien\n");
    } else {
        printf("Entrer un note valid!\n");
    }
   
}