#include <stdio.h>

char reverse(char c[],int size) {

    char reversed[size];
    int index = 0, countelem = 0;
    for (int i = size-1 ;i >= 0;i--) {
        reversed[index] = c[i];
        index++;
    }
    int index2 = 0;
    for (int j = 0; j < size;j++) {
        c[j] = reversed[index2];
        index2++;
    }
}
int main() {
    char chars[] = {'a','b','c','d','e','f'};
    int size = sizeof(chars) / sizeof(chars[0]);
    reverse(chars,size);
    for (int i = 0; i < size; i++) {
        printf("%c", chars[i]);
        if (i != (size -1)) {
            printf(", ");
        }
    }
}