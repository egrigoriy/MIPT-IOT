// Ввести два целых числа a и b (a ≤ b) и вывести квадраты всех чисел от a до b.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int a, b;
    scanf("%d %d", &a, &b);
    for (size_t i = a; i <= b; i++) {
        printf("%d ", i * i);
    }
    return EXIT_SUCCESS;
}
