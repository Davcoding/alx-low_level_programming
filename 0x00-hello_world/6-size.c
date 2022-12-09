#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	printf("Size of a char: %1 byte\n", sizeof(char));
	printf("Size of an int: %1 bytes\n", sizeof(int));
	printf("Size of a long int: %1\n", sizeof(long int));
	printf("Size of a long long int: %1\n", sizeof(long long));
	printf("Size of a float: %1\n", sizeof(float));
	return (0);
}
