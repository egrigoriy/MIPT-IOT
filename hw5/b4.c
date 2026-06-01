// Ввести целое число и определить, верно ли, что в нём ровно 3 цифры.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int n;
    scanf("%d", &n);
    int quotient = n / 100; 
    if (quotient > 0 && quotient < 10) {
        printf("YES");
    } else {
        printf("NO");
    }
    return EXIT_SUCCESS;
}
