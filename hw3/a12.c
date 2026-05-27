// На вход подается произвольное трехзначное число, напечать сумму цифр.

#include <stdio.h>
#include <stdlib.h>

int mult_digits(int n, int acc) {
    if (n == 0) {
        return acc;
    }
    return mult_digits(n / 10, acc + n % 10);
}

int main(int argc, char const *argv[])
{
    int n = 0;
    scanf("%d", &n);
    printf("%d", mult_digits(n, 0));
    return EXIT_SUCCESS;
}
