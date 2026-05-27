// Ввести три числа и определить, верно ли, что они вводились в порядке возрастания.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);
    
    if ((a < b) && (b < c)) {
        printf("YES");
    } else {
        printf("NO");
    }
    return EXIT_SUCCESS;
}
