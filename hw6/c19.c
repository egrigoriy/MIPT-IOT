// Составить функцию, которая преобразует текущий символ цифры в число. Написать программу считающую сумму цифр в тексте. 
// int digit_to_num(char c)

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <inttypes.h>

int digit_to_num(char c);
int is_digit(char c);

int main(void)
{
    int sum = 0;
    char c;
    while ((c = getchar()) != '.')
    {
        if (is_digit(c))
            sum += digit_to_num(c);
    }

    printf("%d", sum);
    return EXIT_SUCCESS;
}

int digit_to_num(char c) {
    return c - '0';
}

int is_digit(char c)
{
    return ((c >= '0') && (c <= '9'));
}
