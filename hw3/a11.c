// Напечатать сумму максимума и минимума.

#include <stdio.h>
#include <stdlib.h>
int max_of_five(int a, int b, int c, int d, int e);
int min_of_five(int a, int b, int c, int d, int e);

int main(int argc, char const *argv[])
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int max = max_of_five(a, b, c, d, e);
    int min = min_of_five(a, b, c, d, e);
    printf("%d", max + min);
    return EXIT_SUCCESS;
}

int max_of_five(int a, int b, int c, int d, int e) {
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    if (d > max) {
        max = d;
    }
    if (e > max) {
        max = e;
    }
    return max;
}

int min_of_five(int a, int b, int c, int d, int e) {
    int min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    if (d < min) {
        min = d;
    }
    if (e < min) {
        min = e;
    }
    return min;
}
