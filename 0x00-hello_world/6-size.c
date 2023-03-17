#include <stdio.h>
/**
 *main - Entry point
 *Return: always 0 (Succes)
 */
int main(void)
{
	printf("Sze of a char: %lu byte(s)", sizeof(char));
	printf("Size of an int: %lu byte(s)", sizeof(int));
	printf("Size of an long int: %lu byte(s)", sizeof(long int));
	printf("Size of an long long int: %lu byte(s)", sizeof(long long int));
	printf("Size of an float: %lu byte(s)", sizeof(float));
	return (0);
}
