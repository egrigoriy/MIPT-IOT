// В файле input.txt дана строка, не более 1000 символов, содержащая буквы, целые числа и иные символы. 
// Требуется все числа, которые встречаются в строке, поместить в отдельный целочисленный массив. 
// Например, если дана строка "data 48 call 9 read13 blank0a", то в массиве числа 48, 9, 13 и 0. 
// Вывести массив по возрастанию в файл output.txt.

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

void sort(int *arr, int size) {
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j]) {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
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
