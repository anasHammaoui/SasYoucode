#include <stdio.h>

int min(int a, int b) {
    if (a < b) {
        return a;
    } else if (b < a) {
        return b;
    }
}
int main() {
    printf("%d",min(8,6));
}