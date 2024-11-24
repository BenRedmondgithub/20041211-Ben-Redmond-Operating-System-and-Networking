#include <stdio.h>

int main()
{
    int array [10];
    int i;

for (i = 0; i < 10; i++) {
 array[i] = i + 1;  
}

printf("The starting address of the array: %p\n", (void*)array);

int index;

printf("Enter an index between 0 and 9: ");

scanf ("%d", &index);

if (index < 0 || index > 9) {
    printf("Invalid index. Please enter a number between 0 and 9.\n");
    return 1;
}

printf ("The value of index %d is: %d\n", index, array[index]);

printf ("The memory address of array [%d] is: %p\n", index, (void*)&array[index]);

return 0;

}
