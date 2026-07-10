// В файле input.txt дано предложение. 
// Необходимо определить, сколько слов заканчиваются на букву 'а'. 
// Ответ записать в файл output.txt.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <inttypes.h>

#define BUFFER_SIZE 1002
#define FILE_IN "input.txt"
#define FILE_OUT "output.txt"

int write_file(char *fname, int count)
{
    FILE *pf = fopen(fname, "w");
    if (pf == NULL)
    {
        fprintf(stderr, "Error on opening output file: %s", fname);
        return EXIT_FAILURE;
    }

    fprintf(pf, "%d %d", count);
    if (fclose(pf) != 0)
    {
        fprintf(stderr, "Error on closing output file: %s", fname);
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}


int main(int argc, char const *argv[])
{
    FILE *fin = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");

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

    char buffer[BUFFER_SIZE] = {'\0'};
    int count = 0;
    while (fscanf(fin, "%s", buffer) == 1)
    {
        if (buffer[strlen(buffer) - 1] == 'a') {
            count++;
        }
    }
    
    fprintf(fout, "%d", count);
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


