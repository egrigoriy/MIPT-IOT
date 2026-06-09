// Составить функцию, которая вычисляет косинус как сумму ряда (с точностью 0.001)
// cos(x) = 1 - x2/2! + x4/4! - x6/6! + ... (x в радианах)
// float cosinus(float x)

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <math.h>
#define EPSILON 0.001
#define PI 3.1415926

float cosinus(float x);
int factorial(int n);
float absf(float x);

int main(void)
{
    int x;
    scanf("%" SCNu32, &x);
    printf("%0.3f", cosinus(x));
    return EXIT_SUCCESS;
}

float cosinus(float x)
{
    float x_rad = x * PI / 180;
    float reference = cos(x_rad);
    float result = 0;
    int i = 0;
    while (absf(result - reference) > EPSILON)
    {
        result += pow(-1, i) * pow(x_rad, 2 * i) / factorial(2 * i);
        i++;
    }

    return result;
}

float absf(float x)
{
    return (x > 0) ? x : -x;
}

int factorial(int n)
{
    int result = 1;
    for (size_t i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}