// Ввести натуральное число вывести квадраты и кубы всех чисел от 1 до этого числа. Число не превосходит 100..

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int n;
    scanf("%d", &n);
    for (size_t i = 1; i <= n; i++) {
        printf("%d ", i);
        printf("%d ", i * i);
        printf("%d", i * i * i);
        printf("\n");
    }
    return EXIT_SUCCESS;
}
