#include <stdio.h>

/**
 *  * main - prints all possible combinations of three digits, in ascending order
 *   *
 *    * Return: Always 0
 *     */
int main(void)
{
	int i, j, k;
/* Loop through all possible combinations of three digits */
	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				int num = i * 100 + j * 10 + k;
/* Check that the digits are different */
				if (num % 111 != 0)
				{
/* Output the combination */
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
/* Add a comma and space if not the last combination */
					if (i != 7 || j != 8 || k != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	return (0);
}

