#include <stdio.h>
/**
 * main - this prints all arguments it receives.
 * @argc: the number of command line arguments.
 * @argv: the array containing the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
