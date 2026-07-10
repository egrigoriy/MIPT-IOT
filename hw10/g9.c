// В файле input.txt строка из меленьких и больших английских букв, знаков препинания и пробелов.
// Требуется удалить из нее повторяющиеся символы и все пробелы.
// Результат записать в файл output.txt.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define BUFFER_SIZE 1002

void print_buffer(char *buffer)
{
    while (*buffer != '\0')
    {
        printf("%c", *buffer);
        buffer++;
    }
    printf("\n");
}

bool was_seen(char *buffer, char *niddle)
{
    while (buffer < niddle)
    {
        if (*buffer == *niddle)
        {
            return true;
        }
        buffer++;
    }
    return false;
}

int main(int argc, char const *argv[])
{
    FILE *fin = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");
    char buffer[BUFFER_SIZE] = {'\0'};

    if (fin == NULL)
    {
        perror("Error on opening input file");
        return EXIT_FAILURE;
    }

    if (fout == NULL)
    {
        perror("Error on opening output file");
        return EXIT_FAILURE;
    }

    fgets(buffer, BUFFER_SIZE, fin);
    buffer[strlen(buffer) - 1] = '\0';

    char *src = buffer;
    char *dst = buffer;

    while (*src != '\0')
    {
        if (*src == ' ' || was_seen(buffer, src))
        {
            src++;
        }
        else
        {
            *dst++ = *src++;
        }
    }

    *dst = '\0';

    fputs(buffer, fout);

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
