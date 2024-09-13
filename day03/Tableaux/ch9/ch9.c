#include <stdio.h>

int main() {
    int table[5] = {1, 2, 3, 4, 5};
    // int reversed[sizeof(table)/sizeof(table[0])];
    // for (int i = 0; i < sizeof(reversed)/sizeof(reversed[0]);i++) {
    //     for(int j = sizeof(table)/sizeof(table[0])-1; j--) {
    //         reversed[i] = table[j];
    //     }
    // }
  //afficher la version reverse
    for (int i = sizeof(table)/sizeof(table[0]) -1;i >= 0; i--) {
        printf("%d ",table[i]);
    }

    //it was so simple and i was making it by the hard way for 30 min:)
}