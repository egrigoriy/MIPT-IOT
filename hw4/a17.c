// Ввести номер месяца и вывести название времени года.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool in_range(int n, int a, int b) {
    return (n >= a) && (n <= b);
}

int main(int argc, char const *argv[])
{
    int n = 0;
    scanf("%d", &n);

    if (in_range(n, 3, 5)) {
        printf("spring");
    } else if (in_range(n, 6, 8)) {
        printf("summer");
    } else if (in_range(n, 9, 11)) {
        printf("autumn");
    } else if (in_range(n, 12, 12) || in_range(n, 1, 2)) {
        printf("winter");
    } else {
        printf("Wrong input! Month number must be between 1 and 12.");
    }
    return EXIT_SUCCESS;
}


