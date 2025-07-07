#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations from command line arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Description: The program expects exactly 3 arguments:
 * num1 operator num2.
 * It validates the input, uses get_op_func to select the operation,
 * performs the calculation, and prints the result.
 * If invalid arguments or errors occur, it prints Error and exits
 * with the specified status codes.
 *
 * Return: 0 on success, exits with 98, 99, or 100 on errors.
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0' ||
	    (argv[2][0] != '+' && argv[2][0] != '-' &&
	     argv[2][0] != '*' && argv[2][0] != '/' &&
	     argv[2][0] != '%'))
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	func = get_op_func(argv[2]);
	printf("%d\n", func(num1, num2));

	return (0);
}
