// Вывести в порядке следования цифры, входящие в десятичную запись натурального числа N.

#include <stdio.h>

void print_reverse(int n) {
    if (n == 0) return;
    print_reverse(n / 10);
    printf("%d ", n % 10);
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    print_reverse(n);
    return 0;
}
