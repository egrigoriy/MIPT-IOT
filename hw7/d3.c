// Дано целое не отрицательное число N. Выведите все его цифры по одной, в обратном порядке, разделяя их пробелами или новыми строками.
// Необходимо реализовать рекурсивную функцию. void print_num(int num)

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

void print_num(int num);

int main(void)
{
    int n;
    scanf("%d", &n);
    print_num(n);
    return EXIT_SUCCESS;
}

void print_num(int num)
{
    if (num < 10)
    {
        printf("%d ", num);
        return;
    }
    printf("%d ", num % 10);
    print_num(num / 10);
}