#include <stdio.h>

int main() {

    // i is stored in read only area
    int const i = 10;
    int j = 20;

    //pointer to integer constant
    int const* ptr = &i;

    printf("ptr: %d\n", *ptr);

    // This will throw error
    *ptr = 100;

    //This is valid valid
    ptr = &j;
    printf("ptr: %d\n", *ptr);

    return 0;
}

