// Вывести на экран ряд чисел Фибоначчи, состоящий из n элементов.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void fibonacci(int n)
{
    int k_2, k_1, k;

    k_2 = 0;
    k_1 = 1;
    for (size_t i = 0; i < n; i++)
    {
        printf("%d ", k_1);
        k = k_2 + k_1;
        k_2 = k_1;
        k_1 = k;
    }
    
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    fibonacci(n);
    return EXIT_SUCCESS;
}
