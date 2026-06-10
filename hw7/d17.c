// Функция Аккермана определяется рекурсивно для неотрицательных целых чисел m и n следующим образом:
// Реализуйте данную функцию по прототипу
// int akkerman(int m, int n)

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int akkerman(int n, int m)
{
    if (n == 0)
        return m + 1;
    if (m == 0)
        return akkerman(n - 1, 1);
    return akkerman(n - 1, akkerman(n, m - 1));
}

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d", akkerman(n, m));
    return EXIT_SUCCESS;
}
