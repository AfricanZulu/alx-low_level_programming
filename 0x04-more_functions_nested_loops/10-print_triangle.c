#include <stdio.h>

void print_triangle(int size)
{
    if (size <= 0)
        return;

    for (int i = 0; i < size; i++) 
    {
        for (int j = 0; j < size; j++) 
	{
            if (j < size - (i + 1))
	    {
                putchar(' ');
            } else
	    {
                putchar('#');
            }
        }
        putchar('\n');
    }
}

int main()
{
    int size = 5;
    print_triangle(size);
    return 0;
}
