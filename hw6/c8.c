// Составить функцию, которая переводит латинскую строчную букву в заглавную. И показать пример ее использования.
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int to_upper(char);

int main(void)
{
    char c;
    while ((c = getchar()) != '.')
    {
        putchar(to_upper(c));
    }
    
    return EXIT_SUCCESS;
}

int to_upper(char c) {
    if ((c >= 'a') && (c <= 'z'))
        return 'A' + (c - 'a');
    return c;
}
