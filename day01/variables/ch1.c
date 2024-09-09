#include <stdio.h>

int main(){
    char nom[20],prenom[20],sexe[10],email[30];
    int age;
    printf("Entrer le nom: ");
    scanf("%s",&nom);
    printf("Entrer le prenom: ");
    scanf("%s",&prenom);
    printf("Entrer le sexe: ");
    scanf("%s",&sexe);
    printf("Entrer l'age: ");
    scanf("%d",&age);
    printf("Entrer l'email address: ");
    scanf("%s",&email);
    printf("Vous etes %s %s, votre age est %d et vous etes un %s.\n Votre email address c'est: %s", prenom,nom,age,sexe,email);
}