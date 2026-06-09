// Составить функцию логическую функцию, которая определяет, верно ли, что в заданном числе все цифры стоят по возрастанию.
// Используя данную функцию решить задачу. int grow_up(int n)

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int grow_up(int n);

int main(void)
{
    int n;

    scanf("%" SCNu32, &n);

    if (grow_up(n))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return EXIT_SUCCESS;
}

int grow_up(int n)
{
    while (n > 0)
    {
        int last = n % 10;
        n = n / 10;
        int before_last = n % 10;
        if (before_last >= last)
        {
            return 0;
        }
    }
    return 1;
}
