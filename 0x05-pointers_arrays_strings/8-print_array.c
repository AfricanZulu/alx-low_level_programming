#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: arrays name
 * @n: Is the number of elements of the arrays to be printed
 * Return: a and n Inputs
 */
void print_arrays(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

	if (i != (n -i))
	{
	      printf(",");
	}
        }
        printf("\n");
}
