// Составить рекурсивную функцию, которая определяет сумму всех чисел от 1 до N

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int sum(int num);

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d", sum(n));
    return EXIT_SUCCESS;
}

int sum(int num)
{
    if (num == 0) {
        return 0;
    }
    return num + sum(num - 1);
}