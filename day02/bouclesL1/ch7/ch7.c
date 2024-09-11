#include <stdio.h>

int main() {
    int num = 1234;
    int inverse = 0;
    while (num > 0) {
        inverse = inverse *10;
        inverse = inverse + (num%10);
        num /= 10;
    }
    printf("%d",inverse);
}