#include <stdio.h>
#include <string.h>

#define  MAX_LEN  101
 
int main(void)
{
   FILE *stream;
   char line[MAX_LEN], *result;
 
   stream = fopen("input.txt","rb");
 
   if ((result = fgets(line,MAX_LEN,stream)) != NULL)
      printf("The string is %s\n", result);
      printf("The string is %d\n", strlen(result));
 

   if (fclose(stream))
      perror("fclose error");
}