#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void populateResult(char *dest, char *n1, int n1_len, char *n2, int n2_len);
int getLengthOfNum(char *str);
void print_result(char *src, int length);

/**
 * main - entry point, multiplies two numbers
 *
 * @argc: integer, length of @argv
 *
 * @argv: one-dimensional array of strings, arguments of this program
 *
 * Return: 0, success
 */

int main(int argc, char *argv[])
{
	int num1_length, num2_length;
	char *result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1_length = getLengthOfNum(argv[1]);
		if (!num1_length)
		{
			printf("Error\n");
			exit(98);
		}
	num2_length = getLengthOfNum(argv[2]);
		if (!num2_length)
		{
			printf("Error\n");
			exit(98);
		}
	result = malloc(num1_length + num2_length);
	if (!result)
		return (1);
	populateResult(result, argv[1], num1_length, argv[2], num2_length);
	print_result(result, num1_length + num2_length);
	printf("\n");
