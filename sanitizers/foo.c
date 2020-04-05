#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int* x = (int*)malloc(sizeof(int) * 5);
    x[10] = 1;
    printf("%d\n", x[10]);
    free(x);

    return 0;
}
