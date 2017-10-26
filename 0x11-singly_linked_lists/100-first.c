#include <stdio.h>
void myStartupFun(void)__attribute__ ((constructor));

/**
 * myStartupFun - Function that runs before main
 */
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
