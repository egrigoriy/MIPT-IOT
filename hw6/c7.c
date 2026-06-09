// Составить функцию, которая переводит число N из десятичной системы счисления в P-ичную систему счисления.
// Два целых числа. N ≥ 0 и 2 ≤ P ≤ 9

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int convert(int, int);

int main(void)
{
    int n, p;
    scanf("%" SCNd32 "%" SCNd32, &n, &p);
    printf("%" PRId32, convert(n, p));
    return EXIT_SUCCESS;
}
 
int convert(int n, int p) {
    if (n < p) {
        return n;
    }
    return convert(n / p, p) * 10 + (n % p);
}