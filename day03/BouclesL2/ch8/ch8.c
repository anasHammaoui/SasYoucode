#include <stdio.h>

int main() {
    int table[10] = {1,2,3,4,5,6,7,8,9,10};
    int high = sizeof(table)/sizeof(table[1])-1;
    int low = 0;
    int num;
    printf("Entrer un numiro: ");
    scanf("%d",&num);
    while (low <= high) {
    int mid = ((low+high)/2);

        if (num == table[mid]){
            printf("Il exist\n");
            break;
        } else if (num < table[mid]) {
            high = mid - 1;
        } else if (num > table[mid]) {
            low = mid+ 1;
        } 
    }
  if (low > high) {
      printf("Il n'existe pas\n");
  }
}