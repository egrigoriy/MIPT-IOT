// Дана строка из английских символов, пробелов и знаков препинания. В конце строки символ точка. 
// Необходимо реализовать рекурсивную функцию, которая считывает данную строку со стандартного потока ввода 
// и возвращает целое число - количество символов 'a' в данной строке.
// int acounter(void)
// Используя данную функцию решить задачу.

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int acounter(void)
{
    char c;
    scanf("%c", &c);
    if (c == '.')
        return 0;
    if (c == 'a')
        return 1 + acounter();
    return acounter();
}

int main(void)
{
    printf("%d", acounter());
    return EXIT_SUCCESS;
}
