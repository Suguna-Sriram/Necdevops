#include <assert.h>
#include <stdio.h>

int add(int a,int b);

void test_add() {
    assert(add(2, 3) == 5);
    assert(add(-1, 1) == 0);
}

int main() {
    test_add();
    printf("All tests passed!\n");
    return 0;
}
