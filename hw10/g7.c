// В файле input.txt считать символьную строку, не более 10 000 символов.
// Посчитать количество строчных (маленьких) и прописных (больших) букв в введенной строке.
// Учитывать только английские буквы. Результат записать в файл output.txt.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <inttypes.h>

#define BUFFER_SIZE 1002
#define FILE_IN "input.txt"
#define FILE_OUT "output.txt"

void print_buffer(char *buffer)
{
    while (*buffer != '\0')
    {
        printf("%c", *buffer);
        buffer++;
    }
    printf("\n");
}
int read_file(char *fname, char *const buffer, const uint32_t size)
{
    FILE *pf = fopen(fname, "r");
    if (pf == NULL)
    {
        fprintf(stderr, "Error on opening input file: %s", fname);
        return EXIT_FAILURE;
    }

    fgets(buffer, size, pf);

    if (fclose(pf) != 0)
    {
        fprintf(stderr, "Error on closing input file: %s", fname);
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}

void count_letters(char *p, int *count_small, int *count_capital)
{
    while (*p != '\0')
    {
        if (*p >= 'a' && *p <= 'z')
        {
            (*count_small)++;
        }
        if (*p >= 'A' && *p <= 'Z')
        {
            (*count_capital)++;
        }
        p++;
    }
}

int write_file(char *fname, int count_small, int count_capital)
{
    FILE *pf = fopen(fname, "w");
    if (pf == NULL)
    {
        fprintf(stderr, "Error on opening output file: %s", fname);
        return EXIT_FAILURE;
    }

    fprintf(pf, "%d %d", count_small, count_capital);
    if (fclose(pf) != 0)
    {
        fprintf(stderr, "Error on closing output file: %s", fname);
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}

int main(int argc, char const *argv[])
{
    char buffer[BUFFER_SIZE] = {'\0'};
    if (read_file(FILE_IN, buffer, BUFFER_SIZE) == EXIT_FAILURE)
    {
        return EXIT_FAILURE;
    }

    int count_small = 0;
    int count_capital = 0;
    count_letters(buffer, &count_small, &count_capital);

    if (write_file(FILE_OUT, count_small, count_capital) == EXIT_FAILURE)
    {
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
