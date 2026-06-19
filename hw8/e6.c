// Считать массив из 12 элементов и посчитать среднее арифметическое элементов массива.

#include <stdio.h>
void input(int*, int);
float average(int*, int);

int main(int argc, char const *argv[])
{
    const int size = 12;
    int arr[size];
    input(arr, size);
    printf("%.2f", average(arr, size));
    return 0;
}

void input(int *arr, int size) {
    for (size_t i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

float average(int *arr, int size) {
    float sum = 0;
    for (size_t i = 0; i < size; i++)
    {
       sum += arr[i];
    }
    return sum / size;
}