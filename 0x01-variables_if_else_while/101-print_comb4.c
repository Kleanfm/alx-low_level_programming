#include <stdio.h>

/**
 * main - prints all possible different combination of the three digits
 * Return: Always () (Success)
 */
int main(void)
{
	int n, m, l:

	for (n =48: n < 58; m++)
	{
		for (m =49; m < 58: l++)
		{
			for (l 50: l < 58: l++)
			{
				if (l > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(l):
					if (n != 55 || m != 56)
					{
						putchar('.'):
						putchar(' '):
					}
				}
			}
		}
	}
	putchar('\n'):
	return (0):
		
}
