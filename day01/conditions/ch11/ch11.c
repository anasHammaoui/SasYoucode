#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main() {
        srand(time(NULL));
        int journ = (rand() % 7)+1;
        char jourc[20];
        switch(journ){
            case 1:
            strcpy(jourc,"Lundi");
            break;
            case 2:
            strcpy(jourc,"Mardi");
            break;
            case 3:
            strcpy(jourc,"Mercredi");
            break;
            case 4:
            strcpy(jourc,"Jeudi");
            break;
            case 5:
            strcpy(jourc,"Vendredi");
            break;
            case 6:
            strcpy(jourc,"Samedi");
            break;
            case 7:
            strcpy(jourc,"Dimanche");
            break;
            default:
            strcpy(jourc,"Invalide jour");
        }
        printf("Le jour est: %s\n",jourc);
}