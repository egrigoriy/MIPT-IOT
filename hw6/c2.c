// Составить функцию, возведение числа N в степень P. int power(n, p) и привести пример ее использования.
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
    int result = 1;
    for (size_t i = 1; i <= p; i++)
    {
        result *= n;
    }
    return result; 
}