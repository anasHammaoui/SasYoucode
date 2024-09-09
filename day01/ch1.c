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
    printf("****Vous etes %s %s, vous avez %d ans et vous etes un/une %s.****\n", prenom,nom,age,sexe);
    printf("****Votre email address c'est: %s****\n",email);
}