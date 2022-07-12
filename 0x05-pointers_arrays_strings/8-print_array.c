#include "main.h"
#include <stdio.h>

/**
* print_array - prints aninputted number of elements
* @a: an array of integers.
* @n: The number of elemnts to be printed.
*/

void print_array(int *a, int n)
{
int index;

for (index = 0; index < n; index++)
{
printf("%d", a[index]);
 if (index == n - 1)
continue;

printf(", ");
}

printf("\n")
}
