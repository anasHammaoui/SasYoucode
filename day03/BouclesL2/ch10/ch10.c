#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num;
    printf("Entrer un nombre: ");
    scanf("%d",&num);
    char table[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','t','u','v','w','x','y','z','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','I','J','K','L','M','O','P','Q','R','S','T','V','W','X','Y','Z'} ;
    srand(time(NULL));
    for (int i =0; i < num ;i++) {
        int randIndex = rand() %(sizeof(table)/sizeof(table[0]));
        printf("%c",table[randIndex]);
    }
}