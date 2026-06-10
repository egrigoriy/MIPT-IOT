// Перевести натуральное число в двоичную систему счисления. Необходимо реализовать рекурсивную функцию.

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int convert(int);

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%" PRId32, convert(n));
    return EXIT_SUCCESS;
}
 
int convert(int n) {
    if (n < 2) {
        return n;
    }
    return convert(n / 2) * 10 + (n % 2);
}