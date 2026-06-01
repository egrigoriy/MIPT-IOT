// Дана последовательность ненулевых целых чисел, в конце последовательности число 0. Посчитать количество четных чисел.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_end(char c_prev, char c)
{
    return (c_prev == ' ') && (c == '0');
}

bool is_last_digit_even(char c_prev, char c)
{
    return ((c_prev % 2) == 0) && (c == ' ');
}

int main(int argc, char const *argv[])
{
    char c, c_prev = ' ';
    int count = 0;
    while (true)
    {
        c = getchar();
        if (is_end(c_prev, c))
        {
            break;
        }
        if (is_last_digit_even(c_prev, c))
        {
            count++;
        }
        c_prev = c;
    }
    printf("%d", count);

    return EXIT_SUCCESS;
}
