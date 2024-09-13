#include <stdio.h>

int main(){
    // prend numiro
    int num;
    printf("Entrer un numiro:");
    scanf("%d",&num);
    // commencer la calculation
    int somme =0;
    for (int i = 1;i<= 10;i++) {
        somme = somme + i*num;
    }
    printf("la somme est: %d",somme);
}