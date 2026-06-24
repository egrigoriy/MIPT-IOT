// Написать только одну функцию. Всю программу отправлять не надо. Вывести в порядке возрастания цифры, входящие в строку.
// Цифра - количество. Функция должно строго соответствовать прототипу:
// void print_digit(char s[])

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>

void print_digit(char s[]);

void input(int size, int *arr)
{
    for (size_t i = 0; i < size; i++)
    {
        if (scanf("%d", &arr[i]) < 0)
        {
            break;
        }
    }
}

void print(int size, int *arr)
{
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main(void)
{
    char str[6] = {'h', 'e', 'l', '1', '7', '\0'};
    print_digit(str);
    return EXIT_SUCCESS;
}

void print_digit(char s[])
{
    int count;
    for (size_t digit = 0; digit <= 9; digit++)
    {
        count = 0;
        int i = 0;
        while (s[i] != '\0')
        {
            if (s[i] == digit + '0')
                count++;
            i++;
        }
        if (count > 0)
            printf("%d %d\n", digit, count);
    }
}

void print_str(char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        printf("%c", s[i]);
        i++;
    }
}