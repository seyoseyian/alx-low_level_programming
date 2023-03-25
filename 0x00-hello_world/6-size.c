#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 *
 */

int main(void)
{
	printf("Size of char: %lu byte(s)", sizeof(char));
	printf("size of int: %lu byte(s)", sizeof(int));
	printf("size of long int: %lu byte(s)", sizeof(long int));
	printf("size of long long int: %lu byte(s)", sizeof(long long int));
	printf("Size of float: %lu byte(s)", sizeof(float));
	return (0);
}
