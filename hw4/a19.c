// Даны стороны треугольника a, b, c. Определить существует ли такой треугольник.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);
    
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("YES");
    } else {
        printf("NO");
    }
    return EXIT_SUCCESS;
}
