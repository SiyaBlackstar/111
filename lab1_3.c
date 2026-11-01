#include <stdio.h>

int main(void) {
    unsigned char x = 250;
    for (int i = 0; i < 10; i++) {
        printf("x = %u\n", x);
        x++;
    }
    return 0;
}
