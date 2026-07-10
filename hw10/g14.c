// В файле input.txt в одной строке фамилию, имя и отчество.
// Сформировать файл приветствие output.txt, где останутся имя и фамилия

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <inttypes.h>

#define BUFFER_SIZE 50
#define FILE_IN "input.txt"
#define FILE_OUT "output.txt"

int read_file(char *fname, char *pfirst, char *psecond, char *plast)
{
    FILE *pf = fopen(fname, "r");
    if (pf == NULL)
    {
        fprintf(stderr, "Error on opening input file: %s", fname);
        return EXIT_FAILURE;
    }

    fscanf(pf, "%s %s %s", plast, pfirst, psecond);

    if (fclose(pf) != 0)
    {
        fprintf(stderr, "Error on closing input file: %s", fname);
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}

int write_file(char *fname, char *first, char *last)
{
    FILE *pf = fopen(fname, "w");
    if (pf == NULL)
    {
        fprintf(stderr, "Error on opening output file: %s", fname);
        return EXIT_FAILURE;
    }

    fprintf(pf, "Hello, %s %s!", first, last);
    if (fclose(pf) != 0)
    {
        fprintf(stderr, "Error on closing output file: %s", fname);
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}

int main(int argc, char const *argv[])
{
    char first[BUFFER_SIZE] = {'\0'};
    char second[BUFFER_SIZE] = {'\0'};
    char last[BUFFER_SIZE] = {'\0'};
    if (read_file(FILE_IN, first, second, last) == EXIT_FAILURE)
    {
        return EXIT_FAILURE;
    }

    if (write_file(FILE_OUT, first, last) == EXIT_FAILURE)
    {
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
