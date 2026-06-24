// Известно, что шахматная доска имеет размерность 8х8 и состоит из клеток 2х цветов, например, черного и белого (см. рисунок).
// Каждая клетка имеет координату, состоящую из буквы и цифры.
// Горизонтальное расположение клетки определяется буквой от A до H, а вертикальное – цифрой от 1 до 8.
// Заметим, что клетка с координатой А1 имеет черный цвет.
// Требуется по заданной координате определить цвет клетки.

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void print_color(char col, int row);

int main(void)
{
    int row;
    char col;
    scanf("%c%d", &col, &row);
    print_color(col, row);
    return EXIT_SUCCESS;
}

void print_color(char col, int row)
{
    if ((col + row) % 2 == 0)
        printf("BLACK");
    else
        printf("WHITE");
}
