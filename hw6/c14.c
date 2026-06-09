// Составить функцию логическую функцию, которая определяет, верно ли, что сумма его цифр – четное число.
// Используя эту функцию решить задачу.

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int is_sum_even(int n);

int main(void)
{
    int n;
    
    scanf("%" SCNu32, &n);
    
    if (is_sum_even(n)) {
        printf("YES");
    } else {
        printf("NO");
    }
    return EXIT_SUCCESS;
}

int is_sum_even(int n)
{
    int count_odds = 0;
    while (n > 0)
    {
        int last_digit = n % 10;
        if (last_digit % 2 != 0)
        {
            count_odds++;
        }
        n = n / 10;
    }
    return (count_odds % 2) == 0;
}
