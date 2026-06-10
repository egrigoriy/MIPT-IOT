// Дано натуральное число n ≥ 1. Проверьте, является ли оно простым.
// Программа должна вывести слово YES, если число простое или NO в противном случае.
// Необходимо составить рекурсивную функцию и использовать ее.
// int is_prime(int n, int delitel)

#include <stdio.h>
#include <stdlib.h>

int is_prime(int n, int delitel);

int main(void)
{
    int n;
    scanf("%d", &n);
    if (is_prime(n, n - 1))
        printf("YES");
    else
        printf("NO");
    return EXIT_SUCCESS;
}

int is_prime(int n, int delitel)
{
    if (n == 1)
        return 0;
    if (delitel == 1)
        return 1;
    if (n % delitel == 0)
        return 0;
    return is_prime(n, delitel - 1);
}