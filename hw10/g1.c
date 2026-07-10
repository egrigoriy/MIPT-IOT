// В файле input.txt дана строка. Вывести ее в файл output.txt три раза через запятую и показать количество символов в ней.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 102

int main(int argc, char const *argv[])
{
    char fin_name[] = "input.txt";
    char fout_name[] = "output.txt";
    FILE *fin, *fout;
    char buffer[BUFFER_SIZE];

    fin = fopen(fin_name, "r");
    if (fin == NULL)
    {
        perror("Error on opening input file");
        return EXIT_FAILURE;
    }

    if (fgets(buffer, sizeof(buffer), fin) == NULL)
    {
        perror("Error on reading input file");
        return EXIT_FAILURE;
    }

    int count = strlen(buffer) - 1;
    buffer[count] = '\0';

    if (fclose(fin) != 0)
    {
        perror("Error on closing input file");
        return EXIT_FAILURE;
    }

    fout = fopen(fout_name, "w");
    if (fout == NULL)
    {
        perror("Error on opening output file");
        return EXIT_FAILURE;
    }

    for (size_t i = 0; i < 3; i++)
    {
        fprintf(fout, "%s", buffer);
        if (i < 2)
        {
            fprintf(fout, ", ");
        }
    }
    fprintf(fout, " %d", count);

    if (fclose(fout) != 0)
    {
        perror("Error on closing output file");
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
