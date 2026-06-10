// Составить рекурсивную функцию, Выведите все числа от A до B включительно, в порядке возрастания,
// если A < B, или в порядке убывания в противном случае.

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

void print_nums(int a, int b);

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    print_nums(a, b);
    return EXIT_SUCCESS;
}

void print_nums(int a, int b)
{
    if (a == b)
    {
        printf("%d", a);
        return;
    }
    printf("%d ", a);
    if (a > b)
        print_nums(a - 1, b);
    else
        print_nums(a + 1, b);
}