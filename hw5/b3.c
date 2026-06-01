// Ввести два целых числа a и b (a ≤ b) и вывести сумму квадратов всех чисел от a до b.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int a, b, sumOfSquares = 0;
    scanf("%d %d", &a, &b);
    for (size_t i = a; i <= b; i++) {
        sumOfSquares += i * i;
    }
    printf("%d ", sumOfSquares);
    return EXIT_SUCCESS;
}
