// Ввести два числа. Если первое число больше второго, то программа печатает слово Above. 
// Если первое число меньше второго, то программа печатает слово Less. 
// А если числа равны, программа напечатает сообщение Equal.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("Above");
    } else if (a < b) {
        printf("Less");
    } else {
        printf("Equal");
    }

    return EXIT_SUCCESS;
}
