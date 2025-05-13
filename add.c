#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(3, 4);
    printf("Sum of 3 and 4 is: %d\n", result);
    return 0;
}