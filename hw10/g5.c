// В файле input.txt дана символьная строка не более 1000 символов. 
// Необходимо заменить все буквы "а" на буквы "b" и наоборот, как заглавные, так и строчные. 
// Результат записать в output.txt.

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

void swap_a_b(char* p) {
    while (*p != '\0')
    {
        if(*p == 'a' || *p == 'A') {
            (*p)++;
        } else if(*p == 'b' || *p == 'B') {
            (*p)--;
        }
        p++;
    }
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


int main(int argc, char const *argv[])
{
    char buffer[BUFFER_SIZE] = {'\0'};
    if (read_file(FILE_IN, buffer, BUFFER_SIZE) == EXIT_FAILURE)
    {
        return EXIT_FAILURE;
    }

    swap_a_b(buffer);

    if (write_file(FILE_OUT, buffer) == EXIT_FAILURE)
    {
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
