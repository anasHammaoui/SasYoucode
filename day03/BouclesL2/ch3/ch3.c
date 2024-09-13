#include <stdio.h>

int main() {
    int num;
    printf("Entrer un numiiro: ");
    scanf("%d",&num);
    for(int i = 1; i <= num;i++) {
          if (i*2-1 >num) {
            break;
        }
        printf("%d",i*2-1);
        if (i*2-1 != num) {
            printf(", ");
        }
      
    }
}