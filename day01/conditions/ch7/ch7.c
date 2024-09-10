#include <stdio.h>

int main() {
    char caractere;
    printf("Entrer un caractere: ");
    scanf("%c",&caractere);
    if (caractere >= 65 && caractere<= 90) {
        printf("Majuscules\n");
    } else if (caractere >= 97 && caractere <= 122) {
        printf("Miniusculle\n");
    }
}