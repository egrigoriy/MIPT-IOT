// Ввести три числа, найти их произведение и произведение.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);
    int sum = a + b + c;
    printf("%d+%d+%d=%d\n", a, b, c, sum);
    int product = a * b * c;
    printf("%d*%d*%d=%d", a, b, c, product);
    return 0;
}
