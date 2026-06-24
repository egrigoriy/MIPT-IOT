// Написать функцию и программу демонстрирующую работу данной функции.
// Вывести в порядке возрастания цифры, входящие в десятичную запись натурального числа N, не более 1000 цифр.
// Цифра пробел сколько раз данная цифра встречается в числе.

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>

#define SIZE 1001

void print_digits_frequency(int size, char *arr);
int count_digit(int size, char *arr, int digit);

void input(int size, char *arr)
{
    char c;
    for (size_t i = 0; i < size; i++)
    {
        if ((c = getchar()) == '\n')
            break;
        arr[i] = c;
    }
}

void print(int size, char *arr)
{
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] == '\0')
            break;
        printf("%c ", arr[i]);
    }
}

int main(void)
{
    char intAsChars[SIZE] = {'\0'};
    input(SIZE, intAsChars);
    print_digits_frequency(SIZE, intAsChars);
    return EXIT_SUCCESS;
}

void print_digits_frequency(int size, char *arr)
{
    for (size_t digit = 0; digit <= 9; digit++)
    {
        int count = count_digit(size, arr, digit);
        if (count > 0)
            printf("%d %d\n", digit, count);
    }
}

int count_digit(int size, char *arr, int digit)
{
    int count = 0;
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] == digit + '0')
            count++;
    }
    return count;
}