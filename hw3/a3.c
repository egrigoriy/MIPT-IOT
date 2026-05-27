// Ввести три числа, найти их сумму.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);
    int sum = a + b + c;
    printf("%d+%d+%d=%d", a, b, c, sum);
    return 0;
}
