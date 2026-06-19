// В диапазоне натуральных чисел от 2 до N определить, сколько из них кратны любому из чисел в диапазоне от 2 до 9.

#include <stdio.h>

void print_multiples(int n)
{
    for (size_t i = 2; i <= 9; i++)
    {
        int counter = 0;
        for (size_t j = 2; j <= n; j++)
        {
            if (j % i == 0)
            {
                counter++;
            }
        }
        printf("%d %d\n", i, counter);
    }
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    print_multiples(n);
    return 0;
}
