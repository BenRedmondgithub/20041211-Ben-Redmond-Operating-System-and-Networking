#include <stdio.h>

int main() {

FILE *file;

fptr = fopen("data.txt","w");
if (FILE == NULL)
{
    printf ("Error opening the file for writing!\n");
    return 1;
}

fprintf(fptr, "Hello, Operating System!\n");

fptr = fopen ("filename.txt","r");

char ch;
printf("contents of the file:\n");
while ((ch = fgetc(fprt)) != EOF)
{
    putchar(ch);
}

fclose(fprt);

return 0;
}