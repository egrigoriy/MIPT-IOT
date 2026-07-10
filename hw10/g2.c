// Считать число N из файла input.txt. Сформировать строку из N символов. N четное число, не превосходящее 26.
// На четных позициях должны находится четные цифры в порядке возрастания, кроме 0,
// на нечетных позициях - заглавные буквы в порядке следования в английском алфавите.
// Результат записать в файл output.txt

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    FILE *fin = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");
    int n;

    if (fin == NULL)
    {
        perror("Error on opening input file");
        return EXIT_FAILURE;
    }

    fscanf(fin, "%d", &n);
    int digits[4] = {2, 4, 6, 8};
    for (size_t i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            int index = ((i - 1) / 2) % 4;
            fprintf(fout, "%d", digits[index]);
        }
        else
        {
            fprintf(fout, "%c", 'A' + i / 2);
        }
    }

    if (fout == NULL)
    {
        perror("Error on opening output file");
        return EXIT_FAILURE;
    }

    if (fclose(fin) != 0)
    {
        perror("Error on closing input file");
        return EXIT_FAILURE;
    }

    if (fclose(fout) != 0)
    {
        perror("Error on closing output file");
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
