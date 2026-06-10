// Составить рекурсивную функцию, печать всех чисел от N до 1.

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

void print_nums(int num);

int main(void)
{
    int n;
    scanf("%d", &n);
    print_nums(n);
    return EXIT_SUCCESS;
}

void print_nums(int num)
{
    if (num == 0) {
        return;
    }
    printf("%d ", num);
    print_nums(num - 1);
}