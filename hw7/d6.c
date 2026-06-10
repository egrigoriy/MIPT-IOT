// Дана строка заканчивающаяся символом точка '.' Напечатать строку наоборот.
// Реализуйте рекурсивную функцию, которая считывает и печатает строку наоборот.
// void reverse_string()

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

void reverse_string()
{
    char c;
    scanf("%c", &c);
    if (c == '.')
        return;
    reverse_string();
    printf("%c", c);
}

int main(void)
{
    reverse_string();
    return EXIT_SUCCESS;
}
