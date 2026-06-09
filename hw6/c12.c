// Составить функцию, которая вычисляет синус как сумму ряда (с точностью 0.001)
// sin(x) = x - x3/3! + x5/5! - x7/7! + ...(x в радианах)

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <math.h>
#define EPSILON 0.001
#define PI 3.1415926

float sinus(float x);
int factorial(int n);
float absf(float x);

int main(void)
{
    int x;
    scanf("%" SCNu32, &x);
    printf("%0.3f", sinus(x));
    return EXIT_SUCCESS;
}

float sinus(float x)
{
    float x_rad = x * PI / 180;
    float reference = sin(x_rad);
    float result = 0;
    int i = 0;
    while (absf(result - reference) > EPSILON)
    {
        result += pow(-1, i) * pow(x_rad, 2 * i + 1) / factorial(2 * i + 1);
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