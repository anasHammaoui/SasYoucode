#include <stdio.h>

int main() {
    char caractere;
    printf("Entrer un caractere: ");
    scanf("%c",&caractere);
    if (caractere >= 65 && caractere <=122) {
        printf("Elle est part d'alphabet.\n");
        if (caractere >= 65 && caractere <= 90) {
            printf("Elle est majusculle\n");
        } else if (caractere>= 97 && caractere<= 122) {
            printf("Elle est minisculle\n");
        }
    } else {
        printf("Elle n'a pas un part d'alphabet\n");
    }
}