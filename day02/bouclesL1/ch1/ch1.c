#include <stdio.h>

int main(){
    int num;
    printf("Entrer un numiro: ");
    scanf("%d",&num);
    for (int i= 1; i <= 10; i++) {
        printf("%d * %d = %d\n",num,i, i*num);
    }
}