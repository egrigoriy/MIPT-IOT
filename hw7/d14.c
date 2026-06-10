// Дана последовательность целых чисел через пробел, завершающаяся числом 0.
// Выведите все нечетные числа из этой последовательности, сохраняя их порядок.

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

void print_odds()
{
    int n;
    scanf("%d", &n);
    if (n == 0)
        return;
    if ((n % 2) != 0)
        printf("%d ", n);
    print_odds();
}

int main(void)
{
    print_odds();
    return EXIT_SUCCESS;
}
