// Дан текст состоящий из английских букв и цифр, заканчивается символом «.» Перевести все заглавные английские буквы в строчные.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_capital(char c)
{
    return (c >= 'A') && (c <= 'Z');
}

char to_lower_case(char c)
{
    if (is_capital(c))
    {
        return c + ('a' - 'A');
    }
    return c;
}

int main(int argc, char const *argv[])
{
    char c;
    while ((c = getchar()) != '.')
    {
        putchar(to_lower_case(c));
    }

    return EXIT_SUCCESS;
}
