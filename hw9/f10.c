// Дана строка состоящая из маленьких латинских букв 'a'..'z'.
// В конце строки точка. Необходимо заменить повторяющиеся буквы на <буква><количество повторений>

#include <stdio.h>
#include <stdlib.h>

void print_letter_frequency();

int main(void)
{
    print_letter_frequency();
    return EXIT_SUCCESS;
}

void print_letter_frequency()
{
    char c, prev_c = '\0';
    int count = 0;
    while ((c = getchar()) != '.')
    {
        if (prev_c == '\0')
        {
            prev_c = c;
        }
        if (c == prev_c)
        {
            count++;
        }
        else
        {
            printf("%c%d", prev_c, count);
            prev_c = c;
            count = 1;
        }
    }
    printf("%c%d", prev_c, count);
}