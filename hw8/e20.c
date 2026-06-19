// Переставить цифры в числе так, что бы получилось максимальное число.

#include <stdio.h>
#include <math.h>

void print_max(int n) {
    int n_copy = n;
    for (int i = 9; i >= 0; i--)
    {
        while (n_copy > 0)
        {
            int last = n_copy % 10;
            if (last == i) {
                printf("%d", i);
            }
            n_copy = n_copy /10;
        }
        n_copy = n;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    print_max(n);
    return 0;
}
