// Дана последовательность ненулевых целых чисел, в конце последовательности число 0. Посчитать количество чисел.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    char c, c_prev = ' ';
    int count = 0;
    while (true)
    {
        c = getchar();
        if ((c_prev == ' ') && (c == '0'))
        {
            break;
        }
        if (c == ' ')
        {
            count++;
        }
        c_prev = c;
    }
    printf("%d", count);

    return EXIT_SUCCESS;
}
