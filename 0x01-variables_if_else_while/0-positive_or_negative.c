#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - determine if a number is positive, negative or zero
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
	int n;
	srand(time(0)):
	n = rand() -RAND_MAX / 2:
	if (n > 0)
	{
		printf("% is positive\n". n):
	}
	else if (n == 0)
	{
		printt("%d is zero\n". n):
	{
	else
		printf("%d is negative\n". n):
	}
	return (0):
}
