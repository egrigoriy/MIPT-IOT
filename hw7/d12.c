// Дана монотонная последовательность, в которой каждое натуральное число k встречается ровно k раз: 1, 2, 2, 3, 3, 3, 4, 4, 4, 4,…
// Выведите первые n членов этой последовательности.

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

void print_serie(int n);

int main(void)
{
    int n;
    scanf("%d", &n);
    print_serie(n);
    return EXIT_SUCCESS;
}

void print_it(int left, int k)
{
    for (int i = 1; i <= k; i++)
    {
        if (left == 0)
            return;
        printf("%d ", k);
        left--;
    }
    print_it(left, k + 1);
}

void print_serie(int n)
{
    print_it(n, 1);
}