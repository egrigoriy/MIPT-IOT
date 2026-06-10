// Написать логическую рекурсивную функцию и используя ее определить является ли введенное натуральное число точной степенью двойки.
// int is2pow(int n)

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int is2pow(int n)
{
    if (n == 1)
        return 1;
    if ((n % 2) != 0)
        return 0;
    return is2pow(n / 2);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    if (is2pow(n))
        printf("YES");
    else
        printf("NO");
    return EXIT_SUCCESS;
}
