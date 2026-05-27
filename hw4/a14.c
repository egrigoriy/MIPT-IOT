// Дано трехзначное число, напечатать макисмальную цифру.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n = 0;
    scanf("%d", &n);
    int max_digit = 0;
    while (n > 0) {
        int remainder = n % 10;
        if (remainder > max_digit) {
            max_digit = remainder;
        }
        n = n / 10;
    }
    printf("%d", max_digit);
    return EXIT_SUCCESS;
}
