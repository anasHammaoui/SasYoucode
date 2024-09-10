#include <stdio.h>

int main() {
    int num,place = 1,bin = 0;
    printf("Entrer un numiro pour convertir: ");
    scanf("%d",&num);
      int numh = num;// car le num sera devienne 0 
    while (num >0) {
        bin = bin + (num%2)* place;
        place = place * 10;
        num /= 2;
    }
    printf("Le nombre en binaire c'est: %d\n",bin);
    printf("Le nombre en hexa c'est: %x\n",numh);
}