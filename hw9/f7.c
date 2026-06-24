// Написать функцию, которая сжимает серии массива, состоящего из единиц и нулей по следующему принципу:
// например, массив [0,0,0,0,1,1,1,1,1,1,1,0,0,1,1,1,1]
// преобразуется в [4,7,2,4] (т.к. начинается с нуля, то сразу записывается количество элементов первой серии);
// а массив [1,1,1,0,0,0,0,0,0,0]
// преобразуется в [0,3,7] (т.к. первая серия - это единицы, то первый элемент преобразованного массива 0).

// Необходимо реализовать только одну функцию, всю программу загружать не надо.
// Прототип функции: int compression(int a[], int b[], int N)

#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int compression(int a[], int b[], int N);

void input(int size, int *a)
{
    int n;
    for (size_t i = 0; i < size; i++)
    {
        n = scanf("%d", &a[i]);
        if (n < 0)
            break;
    }
}

void print(int size, int *arr)
{
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main(void)
{
    int in[SIZE] = {0};
    int out[SIZE] = {0};
    input(SIZE, in);
    printf("%d\n", compression(in, out, SIZE));
    print(SIZE, out);
    return EXIT_SUCCESS;
}

int compression(int a[], int b[], int N)
{

    int out_index = 0;
    if (a[0] == 1)
    {
        b[out_index++] = 0;
    }
    int current = a[0];
    int count = 1;
    for (size_t i = 1; i < N; i++)
    {
        if (a[i] == current)
        {
            count++;
        }
        else
        {
            b[out_index++] = count;
            current = a[i];
            count = 1;
        }
    }
    b[out_index++] = count;
    return out_index;
}
