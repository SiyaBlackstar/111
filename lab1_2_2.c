#include <stdio.h>

int main(void) {
    char c;
    int i;
    double d;
    int a[5];

    printf("Address of c    : %p\n", (void *)&c);
    printf("Address of i    : %p\n", (void *)&i);
    printf("Address of d    : %p\n", (void *)&d);
    printf("-----------------------------\n");
    for (int k = 0; k < 5; k++) {
        printf("Address of a[%d] : %p\n", k, (void *)&a[k]);
    }

    return 0;
}
