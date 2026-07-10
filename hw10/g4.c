// В файле input.txt даны два слова не более 100 символов каждое, разделенные одним пробелом.
// Найдите только те символы слов, которые встречаются в обоих словах только один раз.
// Напечатайте их через пробел в файл output.txt в лексикографическом порядке.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define BUFFER_SIZE 101

void print_buffer(char *buffer)
{
    while (*buffer != '\0')
    {
        printf("%c", *buffer);
        buffer++;
    }
    printf("\n");
}

int count_char(char *txt, char c)
{
    int seen = 0;
    for (size_t i = 0; i < strlen(txt); i++)
    {
        if (*(txt + i) == c)
        {
            seen++;
        }
    }
    return seen;
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

    char first[BUFFER_SIZE] = {'\0'};
    char second[BUFFER_SIZE] = {'\0'};
    char result[BUFFER_SIZE * 2] = {'\0'};
    fscanf(fin, "%100s %100s", first, second);

    for (size_t i = 0; i < strlen(first); i++)
    {
        int count_in_first = count_char(first, first[i]);
        int count_in_second = count_char(second, first[i]);
        if ((count_in_first == 1) && (count_in_second == 1))
        {
            fprintf(fout, "%c ", first[i]);
        }
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
