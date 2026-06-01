// Ввести целое число и определить, верно ли, что в его записи есть две одинаковые цифры, стоящие рядом.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a, b;
    int n = 0;
    scanf("%d", &n);
    while (n > 0) {
        a = n % 10;
        b = (n / 10) % 10;
        if (a == b) {
            printf("YES");
            return EXIT_SUCCESS;
        }
        n = n / 10;
    }
    printf("NO");
    return EXIT_SUCCESS;
}