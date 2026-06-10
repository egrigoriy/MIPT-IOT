// Дана последовательность ненулевых целых чисел, завершающаяся числом 0. Ноль в последовательность не входит.
// Определите наибольшее значение числа в этой последовательности.
// Для решения задачи необходимо написать рекурсивную функцию вида:
// int max_find(int max)

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int max_find(int max)
{
    int n;
    scanf("%d", &n);
    if (n == 0)
        return max;
    if (n > max)
        return max_find(n);
    return max_find(max);
}

int main(void)
{
    printf("%d", max_find(INT32_MIN));
    return EXIT_SUCCESS;
}
