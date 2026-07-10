// В файле input.txt дано предложение.
// Необходимо заменить все имена «Cao» на «Ling» и записать результат в файл output.txt.

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

int replace(char *buffer, char *original, char *newone)
{
    if (strlen(original) == strlen(newone))
    {
        buffer = strstr(buffer, original);
        while (buffer != NULL)
        {
            strcpy(buffer, newone);
            print_buffer(buffer);
            buffer = strstr(buffer, original);
        }

        return EXIT_SUCCESS;
    }
    return EXIT_SUCCESS;
}

int main(int argc, char const *argv[])
{
    char buffer[BUFFER_SIZE] = {'\0'};
    char original[] = "Cao";
    char newone[] = "Lin";

    if (read_file(FILE_IN, buffer, BUFFER_SIZE) == EXIT_FAILURE)
    {
        return EXIT_FAILURE;
    }

    print_buffer(buffer);
    replace(buffer, original, newone);
    print_buffer(buffer);

    if (write_file(FILE_OUT, buffer) == EXIT_FAILURE)
    {
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
