// В файле input.txt необходимо удалить все лишние пробелы (в начале предложения и сдвоенные пробелы).
// Для решения задачи разработать функцию. Результат записать в output.txt.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define BUFFER_SIZE 102

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

    while(fscanf(fin, "%s", buffer) == 1) {
        fprintf(fout, "%s ", buffer);
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


