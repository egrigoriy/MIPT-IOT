// Составить логическую функцию, которая определяет, что текущий символ это цифра. Написать программу считающую количество цифр в тексте.
// int is_digit(char c)

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <inttypes.h>

int is_digit(char c);

int main(void)
{
    int count = 0;
    char c;
    while ((c = getchar()) != '.')
    {
        if (is_digit(c))
            count++;
    }

    printf("%d", count);
    return EXIT_SUCCESS;
}

int is_digit(char c)
{
    return ((c >= '0') && (c <= '9'));
}
