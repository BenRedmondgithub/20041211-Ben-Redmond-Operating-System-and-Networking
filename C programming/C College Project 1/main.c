#include <stdio.h>

int main() {

FILE *fptr;

fptr = fopen("data.txt","w");
if (fptr == NULL)
{
    printf ("Error opening the file for writing!\n");
    return 1;
}

fprintf(fptr, "Hello, Operating System!\n");

fclose (fptr);

fptr = fopen ("data.txt","r");
if(fptr == NULL) {
    printf("Error reading this file");
    return 1;
}

char ch;
printf("contents of the file:\n");
while ((ch = fgetc(fptr)) != EOF)
{
    putchar(ch);
}

fclose(fptr);

return 0;

}