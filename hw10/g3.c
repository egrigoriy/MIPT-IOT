// В файле input.txt дана строка из не более 1000 символов. 
// Показать номера символов, совпадающих с последним символом строки.
// Результат записать в файл output.txt

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

    for (size_t i = 0; i < strlen(buffer) - 1; i++)
    {
        if (buffer[i] == buffer[strlen(buffer) - 1]) {
            fprintf(fout, "%d ", i);
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
