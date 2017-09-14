#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: printing all possible combination of two digit numbers
 *
 * Return: Always Zero
 */
int main(void)
{
	int n;
	int n_1;
	int n_2;
	int n_3;

	n = 48;
	while (n <= 57)
	{
		n_1 = 48;
		while (n_1 <= 57)
		{
			n_2 = 48;
			while (n_2 <= 57)
			{
				n_3 = 48;
				while (n_3 <= 57)
				{
					if (n_1 < n_3 && n_2 >= n)
					{
						putchar(n);
						putchar(n_1);
						putchar(' ');
						putchar(n_2);
						putchar(n_3);
						if (n < 57 || n_1 < 56)
						{
							putchar(',');
							putchar(' ');
						}
					}
					n_3++;
				}
				n_2++;
			}
			n_1++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
