// Написать функцию, которая возвращает среднее арифметическое двух переданных ей аргументов (параметров). 
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int f(int a, int b);

int main(void)
{
    int a, b;
    scanf("%" SCNd32 "%" SCNd32, &a, &b);
    printf("%" PRId32, f(a, b));
    return EXIT_SUCCESS;
}
 
int f(int a, int b) {
    return (int)(((a + b) / 2));
}