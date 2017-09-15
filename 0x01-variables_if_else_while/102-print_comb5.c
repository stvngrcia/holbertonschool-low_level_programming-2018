#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all possible combinations of two two-digit numbers
 * non repeating
 *
 * Return: Always zero
 */
int main(void)
{
	int m_0;
	int m_1;

	for (m_0 = 0; m_0 < 99; m_0++)
	{
		for (m_1 = m_0 + 1; m_1 <= 99; m_1++)
		{
			if (m_0 < m_1)
			{
				putchar (m_0 / 10 + 48);
				putchar (m_0 % 10 + 48);
				putchar (' ');
				putchar (m_1 / 10 + 48);
				putchar (m_1 % 10 + 48);
				if (m_0 != 98)
				{
					putchar (',');
					putchar (' ');
				}

			}
		}
	}
	putchar('\n');
	return (0);
}
