// Проверить строку состоящую из скобок "(" и ")" на корректность.
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int main(void)
{
    int count = 0;
    char c;
    while ((c = getchar()) != '.')
    {
        if (c == '(')
            count++;
        if (c == ')')
            count--;
        if (count < 0)
            break;
    }
    if (count == 0)
        printf("YES");
    else
        printf("NO");
    return EXIT_SUCCESS;
}
