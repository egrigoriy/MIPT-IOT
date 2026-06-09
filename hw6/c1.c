// Составить функцию, модуль числа и привести пример ее использования.
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int to_upper(int);

int main(void)
{
    int n;
    scanf("%" SCNd32, &n);
    printf("%" PRIu32, abs(n));
    return EXIT_SUCCESS;
}

int to_upper(int n) {
    return (n >= 0) ? n : -n;
}
