// Ввести три числа, найти их среднее арифметическое.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);
    float average = (a + b + c) / 3.0;
    printf("%.2f", average);
    return 0;
}
