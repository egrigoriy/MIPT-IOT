// В файле input.txt дано предложение требуется разобрать его на отдельные слова.
// Напечатать каждое слово на отдельной строке в файл output.txt.

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

int write_file(char *fname, char *const buffer)
{
    FILE *pf = fopen(fname, "w");
    if (pf == NULL)
    {
        fprintf(stderr, "Error on opening output file: %s", fname);
        return EXIT_FAILURE;
    }

    fputs(buffer, pf);
    if (fclose(pf) != 0)
    {
        fprintf(stderr, "Error on closing output file: %s", fname);
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}

void break_into_words(char *buffer)
{
    char *psrc = buffer;
    char *pdst = buffer;

    // remove leading spaces
    while (*(psrc++) == ' ')
    {
        printf("%s\n", *psrc);
    }
    while (*psrc != '\0')
    {
        printf("%s\n", *psrc);
        while (*(psrc++) != ' ')
        {
            printf("%s\n", *psrc);
            *(pdst++) = *psrc;
        }
    }
}

int main(int argc, char const *argv[])
{
    char buffer[BUFFER_SIZE] = {'\0'};
    if (read_file(FILE_IN, buffer, BUFFER_SIZE) == EXIT_FAILURE)
    {
        return EXIT_FAILURE;
    }

    break_into_words(buffer);
    print_buffer(buffer);

    if (write_file(FILE_OUT, buffer) == EXIT_FAILURE)
    {
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
