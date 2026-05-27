// Определить уравнение прямой по координатам двух точек. 
// Уравнение вида: y=k*x+b

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    float k = (double)(y2 - y1) / (x2 - x1);
    float b = y1 - k * x1;
    printf("%.2f %.2f", k, b);
    return EXIT_SUCCESS;
}
