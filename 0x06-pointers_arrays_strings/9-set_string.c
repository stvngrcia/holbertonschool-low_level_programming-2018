#include <stdio.h>
/**
 * set_string - Moves a pointer to a string
 * @s: String
 * @to: String
 */

void set_string(char **s, char *to)
{
	*s = to;
}
