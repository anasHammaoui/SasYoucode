#include <stdio.h>

int max(int a, int b) {
    if (a > b) {
        return a;
    } else if (b > a) {
        return b;
    }
}
int main() {
    printf("%d",max(3,12));
}