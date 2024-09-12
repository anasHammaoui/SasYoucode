#include <stdio.h>

int main(){
    int num;
    printf("Entrer un numiro: ");
    scanf("%d",&num);
    int somme =0;
    for (int i = 1; i <= num; i++) {
        somme = somme+ i;
    }
    printf("%d\n",somme);
}