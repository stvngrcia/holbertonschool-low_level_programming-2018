#include <stdio.h>
void myStartupFun(void)__attribute__ ((constructor));

/**
 * myStartupFun - Function that runs before main
 */
void myStartupFun(void)
{
	char *a;

	a = "You're beat! and yet,you must allow,\n";
	printf("%sI bore my house upon my back!\n", a);
}
