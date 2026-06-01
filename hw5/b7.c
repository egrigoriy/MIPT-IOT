// Ввести целое число и определить, верно ли, что в его записи есть две одинаковые цифры, НЕ обязательно стоящие рядом.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int a, b;
    int m, n = 0;
    scanf("%d", &n);
    while (n > 0) {
        a = n % 10;
        m = n / 10;
        while (m > 0)
        {
            b = m % 10;
            if (a == b) {
                printf("YES");
                return EXIT_SUCCESS;
            }
            m = m / 10;
        }
        n = n / 10;
    }
    printf("NO");
    return EXIT_SUCCESS;
}